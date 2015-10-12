let rec countChars lst c count =
  match lst with
    [] -> count
  | x::rest ->
     if String.contains x c = true then countChars rest c (count+1)
     else countChars rest c count;;

let repeat f =
  let rec loop acc = function
    | 0 -> List.rev acc
    | n -> loop (f () :: acc) (n - 1) in
  loop []


let () =
  Printf.printf "%d\n" (countChars (repeat (fun () -> Scanf.scanf "%s\n" (fun r -> r)) 12) 'r' 0);;
