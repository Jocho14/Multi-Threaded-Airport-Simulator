# Multi-Threaded-Airport-Simulator  

## Brief Description

The project aims to create a multithreaded airport simulator that will manage the passenger check-in process, flight operations, and airport traffic control. The system should allow dynamic management of airport resources such as gates, check-in counters, runways, and handle unforeseen situations like flight delays.

## Threads and Resources

### Threads

- **Passengers**: Individual threads representing people checking in for flights, waiting in departure areas, and traveling.
- **Planes**: Threads that represent planes performing various tasks.
- **Attack**: A scenario where an attack disrupts airport operations.

### Resources

- **Gates**: Limited resources where passengers and their baggage are checked in.
- **Runways**: Critical resources necessary for takeoffs and landings.

## Critical Sections

- **Managing Gate Availability**: Shared access to information about available gates, where synchronization is necessary to avoid conflicts.
- **Runway Traffic Control**: Coordination of flight and air traffic controller threads to ensure safe movement on the runway.

## Conditional Variables

- **Waiting for an Available Gate**: Flight threads may be put on hold until a gate becomes available.
