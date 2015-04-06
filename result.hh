<?hh
class Stream {
    public function __construct(
        private Vector<int> $start,
        private Closure $output,
        private Closure $step
    ) {}

    public function head(): int {
        return $this->output->__invoke($this->start[0]);
    }

    public function tail(): Stream {
        $inc = $this->step->__invoke($this->start);
        $newObj = new Stream($inc, $this->output, $this->step);
        return $newObj;
    }
}

$step = function(Vector<int> $v): Vector<int> {
    return $v->map($x ==> $x + 1);
};

$output = function(int $x): int {
    return $x;
};

$normalNumbers = new Stream(Vector {0}, $output, $step);
var_dump($normalNumbers->head());
var_dump($normalNumbers->tail()->head());
var_dump($normalNumbers->tail()->tail()->head());

$output = function(int $x): int {
    return $x * 2;
};

$evenNumbers = new Stream(Vector {0}, $output, $step);
var_dump($evenNumbers->head());
var_dump($evenNumbers->tail()->head());
var_dump($evenNumbers->tail()->tail()->head());

