/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_EDGEZONECLIENT_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_EDGEZONECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/edgezone/v20260401/model/ApplyPublicIpsRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ApplyPublicIpsResponse.h>
#include <tencentcloud/edgezone/v20260401/model/CreateInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/CreateInstancesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/CreatePrivateNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/CreatePrivateNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/CreatePublicNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/CreatePublicNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DeletePrivateNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DeletePrivateNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DeletePublicNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DeletePublicNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeInstanceTypesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeInstanceTypesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeInstancesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePrivateNetworkInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePrivateNetworkInstancesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePublicIpsRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePublicIpsResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePublicNetworkInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePublicNetworkInstancesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeZoneDataRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeZoneDataResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeZonesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeZonesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyInstanceAttributeRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyInstanceAttributeResponse.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyPrivateNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyPrivateNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyPublicNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyPublicNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/ReleasePublicIpRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ReleasePublicIpResponse.h>
#include <tencentcloud/edgezone/v20260401/model/TerminateInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            class EdgezoneClient : public AbstractClient
            {
            public:
                EdgezoneClient(const Credential &credential, const std::string &region);
                EdgezoneClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyPublicIpsResponse> ApplyPublicIpsOutcome;
                typedef std::future<ApplyPublicIpsOutcome> ApplyPublicIpsOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ApplyPublicIpsRequest&, ApplyPublicIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyPublicIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateNetworkInstanceResponse> CreatePrivateNetworkInstanceOutcome;
                typedef std::future<CreatePrivateNetworkInstanceOutcome> CreatePrivateNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::CreatePrivateNetworkInstanceRequest&, CreatePrivateNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePublicNetworkInstanceResponse> CreatePublicNetworkInstanceOutcome;
                typedef std::future<CreatePublicNetworkInstanceOutcome> CreatePublicNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::CreatePublicNetworkInstanceRequest&, CreatePublicNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublicNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateNetworkInstanceResponse> DeletePrivateNetworkInstanceOutcome;
                typedef std::future<DeletePrivateNetworkInstanceOutcome> DeletePrivateNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DeletePrivateNetworkInstanceRequest&, DeletePrivateNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePublicNetworkInstanceResponse> DeletePublicNetworkInstanceOutcome;
                typedef std::future<DeletePublicNetworkInstanceOutcome> DeletePublicNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DeletePublicNetworkInstanceRequest&, DeletePublicNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePublicNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTypesResponse> DescribeInstanceTypesOutcome;
                typedef std::future<DescribeInstanceTypesOutcome> DescribeInstanceTypesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribeInstanceTypesRequest&, DescribeInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateNetworkInstancesResponse> DescribePrivateNetworkInstancesOutcome;
                typedef std::future<DescribePrivateNetworkInstancesOutcome> DescribePrivateNetworkInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribePrivateNetworkInstancesRequest&, DescribePrivateNetworkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateNetworkInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicIpsResponse> DescribePublicIpsOutcome;
                typedef std::future<DescribePublicIpsOutcome> DescribePublicIpsOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribePublicIpsRequest&, DescribePublicIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicNetworkInstancesResponse> DescribePublicNetworkInstancesOutcome;
                typedef std::future<DescribePublicNetworkInstancesOutcome> DescribePublicNetworkInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribePublicNetworkInstancesRequest&, DescribePublicNetworkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicNetworkInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneDataResponse> DescribeZoneDataOutcome;
                typedef std::future<DescribeZoneDataOutcome> DescribeZoneDataOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribeZoneDataRequest&, DescribeZoneDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceAttributeResponse> ModifyInstanceAttributeOutcome;
                typedef std::future<ModifyInstanceAttributeOutcome> ModifyInstanceAttributeOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ModifyInstanceAttributeRequest&, ModifyInstanceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateNetworkInstanceResponse> ModifyPrivateNetworkInstanceOutcome;
                typedef std::future<ModifyPrivateNetworkInstanceOutcome> ModifyPrivateNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ModifyPrivateNetworkInstanceRequest&, ModifyPrivateNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPublicNetworkInstanceResponse> ModifyPublicNetworkInstanceOutcome;
                typedef std::future<ModifyPublicNetworkInstanceOutcome> ModifyPublicNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ModifyPublicNetworkInstanceRequest&, ModifyPublicNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPublicNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleasePublicIpResponse> ReleasePublicIpOutcome;
                typedef std::future<ReleasePublicIpOutcome> ReleasePublicIpOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ReleasePublicIpRequest&, ReleasePublicIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicIpAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *This API is used to submit a request for multiple IP addresses from the static IP pool to specify a public network instance (random allocation). Need to check user quota before applying.
This API is applicable only to public network instances with `RouteMode=static`. Calling this API for BGP/OSPF instances will return an error.
                 * @param req ApplyPublicIpsRequest
                 * @return ApplyPublicIpsOutcome
                 */
                ApplyPublicIpsOutcome ApplyPublicIps(const Model::ApplyPublicIpsRequest &request);
                void ApplyPublicIpsAsync(const Model::ApplyPublicIpsRequest& request, const ApplyPublicIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyPublicIpsOutcomeCallable ApplyPublicIpsCallable(const Model::ApplyPublicIpsRequest& request);

                /**
                 *This API is used to create a physical machine instance. The system automatically allocates physical machine resources and completes installation. If the user is not in the current availability zone, the system automatically enables billing. It supports concurrent allocation of physical machine resources and async execution of network assignment and installation tasks.
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *Create a private network instance. A user can only create one private network instance in an availability zone. The subnet range is collectively determined by both parameters: Network (network number) and Mask (bit number of the mask). Network must be a valid network address from one of the three RFC 1918 private address ranges: 10.0.0.0/8, 172.16.0.0/12, or 192.168.0.0/16, and all host bits must be 0 (meaning the combination of Network and Mask cannot have any host bits set, such as 10.0.0.1/24 is illegal, use 10.0.0.0/24 instead). The maximum Mask is unified as 28, and the minimum is determined by the address range it belongs to: 10.x.x.x allows 8–28, 172.16.x.x allows 12–28, and 192.168.x.x allows 16–28.
                 * @param req CreatePrivateNetworkInstanceRequest
                 * @return CreatePrivateNetworkInstanceOutcome
                 */
                CreatePrivateNetworkInstanceOutcome CreatePrivateNetworkInstance(const Model::CreatePrivateNetworkInstanceRequest &request);
                void CreatePrivateNetworkInstanceAsync(const Model::CreatePrivateNetworkInstanceRequest& request, const CreatePrivateNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateNetworkInstanceOutcomeCallable CreatePrivateNetworkInstanceCallable(const Model::CreatePrivateNetworkInstanceRequest& request);

                /**
                 *The user inputs the availability zone ID, public network instance name, network line, and routing mode to create a public network instance. A user can only create one public network instance in an availability zone.
Public network instances in **static** routing mode require users to proactively apply for and release public IP addresses.
Public network instances with routing mode set to **OSPF, BGP** automatically allocate public IP ranges when creating and auto release public IP ranges upon termination.
                 * @param req CreatePublicNetworkInstanceRequest
                 * @return CreatePublicNetworkInstanceOutcome
                 */
                CreatePublicNetworkInstanceOutcome CreatePublicNetworkInstance(const Model::CreatePublicNetworkInstanceRequest &request);
                void CreatePublicNetworkInstanceAsync(const Model::CreatePublicNetworkInstanceRequest& request, const CreatePublicNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePublicNetworkInstanceOutcomeCallable CreatePublicNetworkInstanceCallable(const Model::CreatePublicNetworkInstanceRequest& request);

                /**
                 *Delete a private network instance
                 * @param req DeletePrivateNetworkInstanceRequest
                 * @return DeletePrivateNetworkInstanceOutcome
                 */
                DeletePrivateNetworkInstanceOutcome DeletePrivateNetworkInstance(const Model::DeletePrivateNetworkInstanceRequest &request);
                void DeletePrivateNetworkInstanceAsync(const Model::DeletePrivateNetworkInstanceRequest& request, const DeletePrivateNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateNetworkInstanceOutcomeCallable DeletePrivateNetworkInstanceCallable(const Model::DeletePrivateNetworkInstanceRequest& request);

                /**
                 *Modify public network instance info
                 * @param req DeletePublicNetworkInstanceRequest
                 * @return DeletePublicNetworkInstanceOutcome
                 */
                DeletePublicNetworkInstanceOutcome DeletePublicNetworkInstance(const Model::DeletePublicNetworkInstanceRequest &request);
                void DeletePublicNetworkInstanceAsync(const Model::DeletePublicNetworkInstanceRequest& request, const DeletePublicNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePublicNetworkInstanceOutcomeCallable DeletePublicNetworkInstanceCallable(const Model::DeletePublicNetworkInstanceRequest& request);

                /**
                 *This API is used to query the model quota list under the account by availability zone dimensionality based on AppId. If a Zone is input, it returns the model quota under the designated availability zone. If not, it returns the model quota of all AZs under the account.
                 * @param req DescribeInstanceTypesRequest
                 * @return DescribeInstanceTypesOutcome
                 */
                DescribeInstanceTypesOutcome DescribeInstanceTypes(const Model::DescribeInstanceTypesRequest &request);
                void DescribeInstanceTypesAsync(const Model::DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypesOutcomeCallable DescribeInstanceTypesCallable(const Model::DescribeInstanceTypesRequest& request);

                /**
                 *This API is used to query physical machine instance list, support by instance ID, instance name, availability zone, instance status with conditional filtering, and support paging query.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *Query private network instances, support through parameters such as private network instance ID, instance name, and availability zone id.
                 * @param req DescribePrivateNetworkInstancesRequest
                 * @return DescribePrivateNetworkInstancesOutcome
                 */
                DescribePrivateNetworkInstancesOutcome DescribePrivateNetworkInstances(const Model::DescribePrivateNetworkInstancesRequest &request);
                void DescribePrivateNetworkInstancesAsync(const Model::DescribePrivateNetworkInstancesRequest& request, const DescribePrivateNetworkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateNetworkInstancesOutcomeCallable DescribePrivateNetworkInstancesCallable(const Model::DescribePrivateNetworkInstancesRequest& request);

                /**
                 *Query the public network Ip information of the user. For public network instances with routing mode set to Static, return all applied public network Ip information. For public network instances with routing mode set to Ospf and Bgp, return Ip range information directly.
                 * @param req DescribePublicIpsRequest
                 * @return DescribePublicIpsOutcome
                 */
                DescribePublicIpsOutcome DescribePublicIps(const Model::DescribePublicIpsRequest &request);
                void DescribePublicIpsAsync(const Model::DescribePublicIpsRequest& request, const DescribePublicIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicIpsOutcomeCallable DescribePublicIpsCallable(const Model::DescribePublicIpsRequest& request);

                /**
                 *Query public network instance list, support conditional filtering by instance ID, instance name, availability zone, and support paging query.
                 * @param req DescribePublicNetworkInstancesRequest
                 * @return DescribePublicNetworkInstancesOutcome
                 */
                DescribePublicNetworkInstancesOutcome DescribePublicNetworkInstances(const Model::DescribePublicNetworkInstancesRequest &request);
                void DescribePublicNetworkInstancesAsync(const Model::DescribePublicNetworkInstancesRequest& request, const DescribePublicNetworkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicNetworkInstancesOutcomeCallable DescribePublicNetworkInstancesCallable(const Model::DescribePublicNetworkInstancesRequest& request);

                /**
                 *Query statistics by metric name. Data is aggregated at 1-minute intervals.
                 * @param req DescribeZoneDataRequest
                 * @return DescribeZoneDataOutcome
                 */
                DescribeZoneDataOutcome DescribeZoneData(const Model::DescribeZoneDataRequest &request);
                void DescribeZoneDataAsync(const Model::DescribeZoneDataRequest& request, const DescribeZoneDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneDataOutcomeCallable DescribeZoneDataCallable(const Model::DescribeZoneDataRequest& request);

                /**
                 *Cross-regional aggregate query returns the AZ list for the specified AppId in ALL configured regions. The local region directly performs a database query, while remote regions send HTTP requests to each region's DescribeAppZones API and merge the results.
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *This API is used to modify the attributes of a physical machine instance, supporting modification of the instance name and update of the public IP address (IPv4/IPv6). At least one of InstanceName and NewPublicIp must be input.
                 * @param req ModifyInstanceAttributeRequest
                 * @return ModifyInstanceAttributeOutcome
                 */
                ModifyInstanceAttributeOutcome ModifyInstanceAttribute(const Model::ModifyInstanceAttributeRequest &request);
                void ModifyInstanceAttributeAsync(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceAttributeOutcomeCallable ModifyInstanceAttributeCallable(const Model::ModifyInstanceAttributeRequest& request);

                /**
                 *Modify private network instance info
                 * @param req ModifyPrivateNetworkInstanceRequest
                 * @return ModifyPrivateNetworkInstanceOutcome
                 */
                ModifyPrivateNetworkInstanceOutcome ModifyPrivateNetworkInstance(const Model::ModifyPrivateNetworkInstanceRequest &request);
                void ModifyPrivateNetworkInstanceAsync(const Model::ModifyPrivateNetworkInstanceRequest& request, const ModifyPrivateNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateNetworkInstanceOutcomeCallable ModifyPrivateNetworkInstanceCallable(const Model::ModifyPrivateNetworkInstanceRequest& request);

                /**
                 *Modify public network instance info
                 * @param req ModifyPublicNetworkInstanceRequest
                 * @return ModifyPublicNetworkInstanceOutcome
                 */
                ModifyPublicNetworkInstanceOutcome ModifyPublicNetworkInstance(const Model::ModifyPublicNetworkInstanceRequest &request);
                void ModifyPublicNetworkInstanceAsync(const Model::ModifyPublicNetworkInstanceRequest& request, const ModifyPublicNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPublicNetworkInstanceOutcomeCallable ModifyPublicNetworkInstanceCallable(const Model::ModifyPublicNetworkInstanceRequest& request);

                /**
                 *Batch release IPv4 addresses assigned to STATIC public network instances but not bound to physical servers
This API is applicable only to STATIC mode instances. The CIDR of BGP/OSPF instances is automatically returned during deletion with no need to manually release single IP addresses.
                 * @param req ReleasePublicIpRequest
                 * @return ReleasePublicIpOutcome
                 */
                ReleasePublicIpOutcome ReleasePublicIp(const Model::ReleasePublicIpRequest &request);
                void ReleasePublicIpAsync(const Model::ReleasePublicIpRequest& request, const ReleasePublicIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleasePublicIpOutcomeCallable ReleasePublicIpCallable(const Model::ReleasePublicIpRequest& request);

                /**
                 *This API is used to terminate a physical machine instance and free up resources. It synchronously releases network resources (IP recycling) and updates status to terminating, while performing disk cleanup asynchronously in the background. It supports partially successful operations.
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_EDGEZONECLIENT_H_
