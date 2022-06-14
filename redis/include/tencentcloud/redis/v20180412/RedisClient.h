/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_REDIS_V20180412_REDISCLIENT_H_
#define TENCENTCLOUD_REDIS_V20180412_REDISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/redis/v20180412/model/AllocateWanAddressRequest.h>
#include <tencentcloud/redis/v20180412/model/AllocateWanAddressResponse.h>
#include <tencentcloud/redis/v20180412/model/ChangeReplicaToMasterRequest.h>
#include <tencentcloud/redis/v20180412/model/ChangeReplicaToMasterResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceAccountRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceAccountResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeySizeDistRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeySizeDistResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorHotKeyRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorHotKeyResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorSIPRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorSIPResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTookDistRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTookDistResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdTookRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdTookResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceNodeInfoRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceNodeInfoResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeMaintenanceWindowRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeMaintenanceWindowResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeProductInfoRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeProductInfoResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeReplicationGroupRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeReplicationGroupResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeSlowLogRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeSlowLogResponse.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceCreateInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceCreateInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceUpgradeInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceUpgradeInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/ModfiyInstancePasswordRequest.h>
#include <tencentcloud/redis/v20180412/model/ModfiyInstancePasswordResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceReadOnlyRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceReadOnlyResponse.h>
#include <tencentcloud/redis/v20180412/model/ReleaseWanAddressRequest.h>
#include <tencentcloud/redis/v20180412/model/ReleaseWanAddressResponse.h>
#include <tencentcloud/redis/v20180412/model/UpgradeProxyVersionRequest.h>
#include <tencentcloud/redis/v20180412/model/UpgradeProxyVersionResponse.h>
#include <tencentcloud/redis/v20180412/model/UpgradeSmallVersionRequest.h>
#include <tencentcloud/redis/v20180412/model/UpgradeSmallVersionResponse.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            class RedisClient : public AbstractClient
            {
            public:
                RedisClient(const Credential &credential, const std::string &region);
                RedisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AllocateWanAddressResponse> AllocateWanAddressOutcome;
                typedef std::future<AllocateWanAddressOutcome> AllocateWanAddressOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::AllocateWanAddressRequest&, AllocateWanAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateWanAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeReplicaToMasterResponse> ChangeReplicaToMasterOutcome;
                typedef std::future<ChangeReplicaToMasterOutcome> ChangeReplicaToMasterOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ChangeReplicaToMasterRequest&, ChangeReplicaToMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeReplicaToMasterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceAccountResponse> DescribeInstanceAccountOutcome;
                typedef std::future<DescribeInstanceAccountOutcome> DescribeInstanceAccountOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceAccountRequest&, DescribeInstanceAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorBigKeyResponse> DescribeInstanceMonitorBigKeyOutcome;
                typedef std::future<DescribeInstanceMonitorBigKeyOutcome> DescribeInstanceMonitorBigKeyOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorBigKeyRequest&, DescribeInstanceMonitorBigKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorBigKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorBigKeySizeDistResponse> DescribeInstanceMonitorBigKeySizeDistOutcome;
                typedef std::future<DescribeInstanceMonitorBigKeySizeDistOutcome> DescribeInstanceMonitorBigKeySizeDistOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorBigKeySizeDistRequest&, DescribeInstanceMonitorBigKeySizeDistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorBigKeySizeDistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorBigKeyTypeDistResponse> DescribeInstanceMonitorBigKeyTypeDistOutcome;
                typedef std::future<DescribeInstanceMonitorBigKeyTypeDistOutcome> DescribeInstanceMonitorBigKeyTypeDistOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorBigKeyTypeDistRequest&, DescribeInstanceMonitorBigKeyTypeDistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorBigKeyTypeDistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorHotKeyResponse> DescribeInstanceMonitorHotKeyOutcome;
                typedef std::future<DescribeInstanceMonitorHotKeyOutcome> DescribeInstanceMonitorHotKeyOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorHotKeyRequest&, DescribeInstanceMonitorHotKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorHotKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorSIPResponse> DescribeInstanceMonitorSIPOutcome;
                typedef std::future<DescribeInstanceMonitorSIPOutcome> DescribeInstanceMonitorSIPOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorSIPRequest&, DescribeInstanceMonitorSIPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorSIPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorTookDistResponse> DescribeInstanceMonitorTookDistOutcome;
                typedef std::future<DescribeInstanceMonitorTookDistOutcome> DescribeInstanceMonitorTookDistOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorTookDistRequest&, DescribeInstanceMonitorTookDistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorTookDistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorTopNCmdResponse> DescribeInstanceMonitorTopNCmdOutcome;
                typedef std::future<DescribeInstanceMonitorTopNCmdOutcome> DescribeInstanceMonitorTopNCmdOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorTopNCmdRequest&, DescribeInstanceMonitorTopNCmdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorTopNCmdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorTopNCmdTookResponse> DescribeInstanceMonitorTopNCmdTookOutcome;
                typedef std::future<DescribeInstanceMonitorTopNCmdTookOutcome> DescribeInstanceMonitorTopNCmdTookOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorTopNCmdTookRequest&, DescribeInstanceMonitorTopNCmdTookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorTopNCmdTookAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodeInfoResponse> DescribeInstanceNodeInfoOutcome;
                typedef std::future<DescribeInstanceNodeInfoOutcome> DescribeInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceNodeInfoRequest&, DescribeInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaintenanceWindowResponse> DescribeMaintenanceWindowOutcome;
                typedef std::future<DescribeMaintenanceWindowOutcome> DescribeMaintenanceWindowOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeMaintenanceWindowRequest&, DescribeMaintenanceWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintenanceWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductInfoResponse> DescribeProductInfoOutcome;
                typedef std::future<DescribeProductInfoOutcome> DescribeProductInfoOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeProductInfoRequest&, DescribeProductInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationGroupResponse> DescribeReplicationGroupOutcome;
                typedef std::future<DescribeReplicationGroupOutcome> DescribeReplicationGroupOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeReplicationGroupRequest&, DescribeReplicationGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogResponse> DescribeSlowLogOutcome;
                typedef std::future<DescribeSlowLogOutcome> DescribeSlowLogOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeSlowLogRequest&, DescribeSlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateInstanceResponse> InquiryPriceCreateInstanceOutcome;
                typedef std::future<InquiryPriceCreateInstanceOutcome> InquiryPriceCreateInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::InquiryPriceCreateInstanceRequest&, InquiryPriceCreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpgradeInstanceResponse> InquiryPriceUpgradeInstanceOutcome;
                typedef std::future<InquiryPriceUpgradeInstanceOutcome> InquiryPriceUpgradeInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::InquiryPriceUpgradeInstanceRequest&, InquiryPriceUpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModfiyInstancePasswordResponse> ModfiyInstancePasswordOutcome;
                typedef std::future<ModfiyInstancePasswordOutcome> ModfiyInstancePasswordOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModfiyInstancePasswordRequest&, ModfiyInstancePasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModfiyInstancePasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceReadOnlyResponse> ModifyInstanceReadOnlyOutcome;
                typedef std::future<ModifyInstanceReadOnlyOutcome> ModifyInstanceReadOnlyOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstanceReadOnlyRequest&, ModifyInstanceReadOnlyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceReadOnlyAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseWanAddressResponse> ReleaseWanAddressOutcome;
                typedef std::future<ReleaseWanAddressOutcome> ReleaseWanAddressOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ReleaseWanAddressRequest&, ReleaseWanAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseWanAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeProxyVersionResponse> UpgradeProxyVersionOutcome;
                typedef std::future<UpgradeProxyVersionOutcome> UpgradeProxyVersionOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::UpgradeProxyVersionRequest&, UpgradeProxyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeProxyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeSmallVersionResponse> UpgradeSmallVersionOutcome;
                typedef std::future<UpgradeSmallVersionOutcome> UpgradeSmallVersionOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::UpgradeSmallVersionRequest&, UpgradeSmallVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeSmallVersionAsyncHandler;



                /**
                 *This API is used to enable public network access.
                 * @param req AllocateWanAddressRequest
                 * @return AllocateWanAddressOutcome
                 */
                AllocateWanAddressOutcome AllocateWanAddress(const Model::AllocateWanAddressRequest &request);
                void AllocateWanAddressAsync(const Model::AllocateWanAddressRequest& request, const AllocateWanAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateWanAddressOutcomeCallable AllocateWanAddressCallable(const Model::AllocateWanAddressRequest& request);

                /**
                 *This API is used to promote a replica node group of a multi-AZ deployed instance to master node group or a replica node of a single-AZ deployed instance to master node.
                 * @param req ChangeReplicaToMasterRequest
                 * @return ChangeReplicaToMasterOutcome
                 */
                ChangeReplicaToMasterOutcome ChangeReplicaToMaster(const Model::ChangeReplicaToMasterRequest &request);
                void ChangeReplicaToMasterAsync(const Model::ChangeReplicaToMasterRequest& request, const ChangeReplicaToMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeReplicaToMasterOutcomeCallable ChangeReplicaToMasterCallable(const Model::ChangeReplicaToMasterRequest& request);

                /**
                 *This API is used to view instance sub-account information.
                 * @param req DescribeInstanceAccountRequest
                 * @return DescribeInstanceAccountOutcome
                 */
                DescribeInstanceAccountOutcome DescribeInstanceAccount(const Model::DescribeInstanceAccountRequest &request);
                void DescribeInstanceAccountAsync(const Model::DescribeInstanceAccountRequest& request, const DescribeInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceAccountOutcomeCallable DescribeInstanceAccountCallable(const Model::DescribeInstanceAccountRequest& request);

                /**
                 *This API is used to query the big key of an instance.
                 * @param req DescribeInstanceMonitorBigKeyRequest
                 * @return DescribeInstanceMonitorBigKeyOutcome
                 */
                DescribeInstanceMonitorBigKeyOutcome DescribeInstanceMonitorBigKey(const Model::DescribeInstanceMonitorBigKeyRequest &request);
                void DescribeInstanceMonitorBigKeyAsync(const Model::DescribeInstanceMonitorBigKeyRequest& request, const DescribeInstanceMonitorBigKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorBigKeyOutcomeCallable DescribeInstanceMonitorBigKeyCallable(const Model::DescribeInstanceMonitorBigKeyRequest& request);

                /**
                 *This API is used to query the big key size distribution of an instance.
                 * @param req DescribeInstanceMonitorBigKeySizeDistRequest
                 * @return DescribeInstanceMonitorBigKeySizeDistOutcome
                 */
                DescribeInstanceMonitorBigKeySizeDistOutcome DescribeInstanceMonitorBigKeySizeDist(const Model::DescribeInstanceMonitorBigKeySizeDistRequest &request);
                void DescribeInstanceMonitorBigKeySizeDistAsync(const Model::DescribeInstanceMonitorBigKeySizeDistRequest& request, const DescribeInstanceMonitorBigKeySizeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorBigKeySizeDistOutcomeCallable DescribeInstanceMonitorBigKeySizeDistCallable(const Model::DescribeInstanceMonitorBigKeySizeDistRequest& request);

                /**
                 *This API is used to query the big key type distribution of an instance
                 * @param req DescribeInstanceMonitorBigKeyTypeDistRequest
                 * @return DescribeInstanceMonitorBigKeyTypeDistOutcome
                 */
                DescribeInstanceMonitorBigKeyTypeDistOutcome DescribeInstanceMonitorBigKeyTypeDist(const Model::DescribeInstanceMonitorBigKeyTypeDistRequest &request);
                void DescribeInstanceMonitorBigKeyTypeDistAsync(const Model::DescribeInstanceMonitorBigKeyTypeDistRequest& request, const DescribeInstanceMonitorBigKeyTypeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorBigKeyTypeDistOutcomeCallable DescribeInstanceMonitorBigKeyTypeDistCallable(const Model::DescribeInstanceMonitorBigKeyTypeDistRequest& request);

                /**
                 *This API is used to query the hot key of an instance.
                 * @param req DescribeInstanceMonitorHotKeyRequest
                 * @return DescribeInstanceMonitorHotKeyOutcome
                 */
                DescribeInstanceMonitorHotKeyOutcome DescribeInstanceMonitorHotKey(const Model::DescribeInstanceMonitorHotKeyRequest &request);
                void DescribeInstanceMonitorHotKeyAsync(const Model::DescribeInstanceMonitorHotKeyRequest& request, const DescribeInstanceMonitorHotKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorHotKeyOutcomeCallable DescribeInstanceMonitorHotKeyCallable(const Model::DescribeInstanceMonitorHotKeyRequest& request);

                /**
                 *This API is used to query the access source information of an instance.
                 * @param req DescribeInstanceMonitorSIPRequest
                 * @return DescribeInstanceMonitorSIPOutcome
                 */
                DescribeInstanceMonitorSIPOutcome DescribeInstanceMonitorSIP(const Model::DescribeInstanceMonitorSIPRequest &request);
                void DescribeInstanceMonitorSIPAsync(const Model::DescribeInstanceMonitorSIPRequest& request, const DescribeInstanceMonitorSIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorSIPOutcomeCallable DescribeInstanceMonitorSIPCallable(const Model::DescribeInstanceMonitorSIPRequest& request);

                /**
                 *This API is used to query the distribution of instance access duration.
                 * @param req DescribeInstanceMonitorTookDistRequest
                 * @return DescribeInstanceMonitorTookDistOutcome
                 */
                DescribeInstanceMonitorTookDistOutcome DescribeInstanceMonitorTookDist(const Model::DescribeInstanceMonitorTookDistRequest &request);
                void DescribeInstanceMonitorTookDistAsync(const Model::DescribeInstanceMonitorTookDistRequest& request, const DescribeInstanceMonitorTookDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorTookDistOutcomeCallable DescribeInstanceMonitorTookDistCallable(const Model::DescribeInstanceMonitorTookDistRequest& request);

                /**
                 *This API is used to query an instance access command.
                 * @param req DescribeInstanceMonitorTopNCmdRequest
                 * @return DescribeInstanceMonitorTopNCmdOutcome
                 */
                DescribeInstanceMonitorTopNCmdOutcome DescribeInstanceMonitorTopNCmd(const Model::DescribeInstanceMonitorTopNCmdRequest &request);
                void DescribeInstanceMonitorTopNCmdAsync(const Model::DescribeInstanceMonitorTopNCmdRequest& request, const DescribeInstanceMonitorTopNCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorTopNCmdOutcomeCallable DescribeInstanceMonitorTopNCmdCallable(const Model::DescribeInstanceMonitorTopNCmdRequest& request);

                /**
                 *This API is used to query the instance CPU time.
                 * @param req DescribeInstanceMonitorTopNCmdTookRequest
                 * @return DescribeInstanceMonitorTopNCmdTookOutcome
                 */
                DescribeInstanceMonitorTopNCmdTookOutcome DescribeInstanceMonitorTopNCmdTook(const Model::DescribeInstanceMonitorTopNCmdTookRequest &request);
                void DescribeInstanceMonitorTopNCmdTookAsync(const Model::DescribeInstanceMonitorTopNCmdTookRequest& request, const DescribeInstanceMonitorTopNCmdTookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorTopNCmdTookOutcomeCallable DescribeInstanceMonitorTopNCmdTookCallable(const Model::DescribeInstanceMonitorTopNCmdTookRequest& request);

                /**
                 *This API is used to query instance node information.
                 * @param req DescribeInstanceNodeInfoRequest
                 * @return DescribeInstanceNodeInfoOutcome
                 */
                DescribeInstanceNodeInfoOutcome DescribeInstanceNodeInfo(const Model::DescribeInstanceNodeInfoRequest &request);
                void DescribeInstanceNodeInfoAsync(const Model::DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodeInfoOutcomeCallable DescribeInstanceNodeInfoCallable(const Model::DescribeInstanceNodeInfoRequest& request);

                /**
                 *This API is used to query instance maintenance window. The maintenance window specifies a time period during which compatible version upgrade, architecture upgrade, backend maintenance, and other operations can be performed to avoid affecting business.
                 * @param req DescribeMaintenanceWindowRequest
                 * @return DescribeMaintenanceWindowOutcome
                 */
                DescribeMaintenanceWindowOutcome DescribeMaintenanceWindow(const Model::DescribeMaintenanceWindowRequest &request);
                void DescribeMaintenanceWindowAsync(const Model::DescribeMaintenanceWindowRequest& request, const DescribeMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaintenanceWindowOutcomeCallable DescribeMaintenanceWindowCallable(const Model::DescribeMaintenanceWindowRequest& request);

                /**
                 *This API is used to query the purchasable capacity specifications of Redis instances in the specified AZ and instance type. If you are not in the allowlist for the AZ or instance type, you cannot view the details of the capacity specifications. To apply for the eligibility, please submit a ticket.
                 * @param req DescribeProductInfoRequest
                 * @return DescribeProductInfoOutcome
                 */
                DescribeProductInfoOutcome DescribeProductInfo(const Model::DescribeProductInfoRequest &request);
                void DescribeProductInfoAsync(const Model::DescribeProductInfoRequest& request, const DescribeProductInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductInfoOutcomeCallable DescribeProductInfoCallable(const Model::DescribeProductInfoRequest& request);

                /**
                 *This API is used to query the global replication group.
                 * @param req DescribeReplicationGroupRequest
                 * @return DescribeReplicationGroupOutcome
                 */
                DescribeReplicationGroupOutcome DescribeReplicationGroup(const Model::DescribeReplicationGroupRequest &request);
                void DescribeReplicationGroupAsync(const Model::DescribeReplicationGroupRequest& request, const DescribeReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationGroupOutcomeCallable DescribeReplicationGroupCallable(const Model::DescribeReplicationGroupRequest& request);

                /**
                 *This API is used to query the slow log.
                 * @param req DescribeSlowLogRequest
                 * @return DescribeSlowLogOutcome
                 */
                DescribeSlowLogOutcome DescribeSlowLog(const Model::DescribeSlowLogRequest &request);
                void DescribeSlowLogAsync(const Model::DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogOutcomeCallable DescribeSlowLogCallable(const Model::DescribeSlowLogRequest& request);

                /**
                 *This API is used to query the price for purchasing an instance.
                 * @param req InquiryPriceCreateInstanceRequest
                 * @return InquiryPriceCreateInstanceOutcome
                 */
                InquiryPriceCreateInstanceOutcome InquiryPriceCreateInstance(const Model::InquiryPriceCreateInstanceRequest &request);
                void InquiryPriceCreateInstanceAsync(const Model::InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateInstanceOutcomeCallable InquiryPriceCreateInstanceCallable(const Model::InquiryPriceCreateInstanceRequest& request);

                /**
                 *This API is used to query the price for scaling an instance.
                 * @param req InquiryPriceUpgradeInstanceRequest
                 * @return InquiryPriceUpgradeInstanceOutcome
                 */
                InquiryPriceUpgradeInstanceOutcome InquiryPriceUpgradeInstance(const Model::InquiryPriceUpgradeInstanceRequest &request);
                void InquiryPriceUpgradeInstanceAsync(const Model::InquiryPriceUpgradeInstanceRequest& request, const InquiryPriceUpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeInstanceOutcomeCallable InquiryPriceUpgradeInstanceCallable(const Model::InquiryPriceUpgradeInstanceRequest& request);

                /**
                 *This API is used to change the Redis password.
                 * @param req ModfiyInstancePasswordRequest
                 * @return ModfiyInstancePasswordOutcome
                 */
                ModfiyInstancePasswordOutcome ModfiyInstancePassword(const Model::ModfiyInstancePasswordRequest &request);
                void ModfiyInstancePasswordAsync(const Model::ModfiyInstancePasswordRequest& request, const ModfiyInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModfiyInstancePasswordOutcomeCallable ModfiyInstancePasswordCallable(const Model::ModfiyInstancePasswordRequest& request);

                /**
                 *This API is used to set instance input mode.
                 * @param req ModifyInstanceReadOnlyRequest
                 * @return ModifyInstanceReadOnlyOutcome
                 */
                ModifyInstanceReadOnlyOutcome ModifyInstanceReadOnly(const Model::ModifyInstanceReadOnlyRequest &request);
                void ModifyInstanceReadOnlyAsync(const Model::ModifyInstanceReadOnlyRequest& request, const ModifyInstanceReadOnlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceReadOnlyOutcomeCallable ModifyInstanceReadOnlyCallable(const Model::ModifyInstanceReadOnlyRequest& request);

                /**
                 *This API is used to disable public network access.
                 * @param req ReleaseWanAddressRequest
                 * @return ReleaseWanAddressOutcome
                 */
                ReleaseWanAddressOutcome ReleaseWanAddress(const Model::ReleaseWanAddressRequest &request);
                void ReleaseWanAddressAsync(const Model::ReleaseWanAddressRequest& request, const ReleaseWanAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseWanAddressOutcomeCallable ReleaseWanAddressCallable(const Model::ReleaseWanAddressRequest& request);

                /**
                 *This API is used to upgrade instance proxy version.
                 * @param req UpgradeProxyVersionRequest
                 * @return UpgradeProxyVersionOutcome
                 */
                UpgradeProxyVersionOutcome UpgradeProxyVersion(const Model::UpgradeProxyVersionRequest &request);
                void UpgradeProxyVersionAsync(const Model::UpgradeProxyVersionRequest& request, const UpgradeProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeProxyVersionOutcomeCallable UpgradeProxyVersionCallable(const Model::UpgradeProxyVersionRequest& request);

                /**
                 *This API is used to upgrade instance minor version.
                 * @param req UpgradeSmallVersionRequest
                 * @return UpgradeSmallVersionOutcome
                 */
                UpgradeSmallVersionOutcome UpgradeSmallVersion(const Model::UpgradeSmallVersionRequest &request);
                void UpgradeSmallVersionAsync(const Model::UpgradeSmallVersionRequest& request, const UpgradeSmallVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeSmallVersionOutcomeCallable UpgradeSmallVersionCallable(const Model::UpgradeSmallVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_REDISCLIENT_H_
