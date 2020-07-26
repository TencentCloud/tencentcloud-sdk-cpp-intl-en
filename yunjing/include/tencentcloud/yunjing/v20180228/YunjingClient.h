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

#ifndef TENCENTCLOUD_YUNJING_V20180228_YUNJINGCLIENT_H_
#define TENCENTCLOUD_YUNJING_V20180228_YUNJINGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/yunjing/v20180228/model/AddLoginWhiteListRequest.h>
#include <tencentcloud/yunjing/v20180228/model/AddLoginWhiteListResponse.h>
#include <tencentcloud/yunjing/v20180228/model/AddMachineTagRequest.h>
#include <tencentcloud/yunjing/v20180228/model/AddMachineTagResponse.h>
#include <tencentcloud/yunjing/v20180228/model/CloseProVersionRequest.h>
#include <tencentcloud/yunjing/v20180228/model/CloseProVersionResponse.h>
#include <tencentcloud/yunjing/v20180228/model/CreateOpenPortTaskRequest.h>
#include <tencentcloud/yunjing/v20180228/model/CreateOpenPortTaskResponse.h>
#include <tencentcloud/yunjing/v20180228/model/CreateProcessTaskRequest.h>
#include <tencentcloud/yunjing/v20180228/model/CreateProcessTaskResponse.h>
#include <tencentcloud/yunjing/v20180228/model/CreateUsualLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/CreateUsualLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteBruteAttacksRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteBruteAttacksResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteLoginWhiteListRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteLoginWhiteListResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMachineRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMachineResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMachineTagRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMachineTagResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMaliciousRequestsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMaliciousRequestsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteUsualLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteUsualLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAccountStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAccountStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAccountsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAccountsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAgentVulsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAgentVulsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAlarmAttributeRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAlarmAttributeResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeBruteAttacksRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeBruteAttacksResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeHistoryAccountsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeHistoryAccountsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeImpactedHostsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeImpactedHostsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeLoginWhiteListRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeLoginWhiteListResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMachineInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMachineInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMachinesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMachinesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMaliciousRequestsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMaliciousRequestsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortTaskStatusRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortTaskStatusResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOverviewStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOverviewStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProVersionInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProVersionInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessTaskStatusRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessTaskStatusResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityDynamicsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityDynamicsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityTrendsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityTrendsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeTagMachinesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeTagMachinesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeTagsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeTagsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeUsualLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeUsualLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulScanResultRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulScanResultResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportBruteAttacksRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportBruteAttacksResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportVulsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportVulsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/EditTagsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/EditTagsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportBruteAttacksRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportBruteAttacksResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportMaliciousRequestsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportMaliciousRequestsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/IgnoreImpactedHostsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/IgnoreImpactedHostsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/MisAlarmNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/MisAlarmNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyAlarmAttributeRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyAlarmAttributeResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyAutoOpenProVersionConfigRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyAutoOpenProVersionConfigResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyLoginWhiteListRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyLoginWhiteListResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyProVersionRenewFlagRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyProVersionRenewFlagResponse.h>
#include <tencentcloud/yunjing/v20180228/model/OpenProVersionRequest.h>
#include <tencentcloud/yunjing/v20180228/model/OpenProVersionResponse.h>
#include <tencentcloud/yunjing/v20180228/model/RecoverMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/RecoverMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/RescanImpactedHostRequest.h>
#include <tencentcloud/yunjing/v20180228/model/RescanImpactedHostResponse.h>
#include <tencentcloud/yunjing/v20180228/model/SeparateMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/SeparateMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/TrustMaliciousRequestRequest.h>
#include <tencentcloud/yunjing/v20180228/model/TrustMaliciousRequestResponse.h>
#include <tencentcloud/yunjing/v20180228/model/TrustMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/TrustMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/UntrustMaliciousRequestRequest.h>
#include <tencentcloud/yunjing/v20180228/model/UntrustMaliciousRequestResponse.h>
#include <tencentcloud/yunjing/v20180228/model/UntrustMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/UntrustMalwaresResponse.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            class YunjingClient : public AbstractClient
            {
            public:
                YunjingClient(const Credential &credential, const std::string &region);
                YunjingClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddLoginWhiteListResponse> AddLoginWhiteListOutcome;
                typedef std::future<AddLoginWhiteListOutcome> AddLoginWhiteListOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::AddLoginWhiteListRequest&, AddLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLoginWhiteListAsyncHandler;
                typedef Outcome<Error, Model::AddMachineTagResponse> AddMachineTagOutcome;
                typedef std::future<AddMachineTagOutcome> AddMachineTagOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::AddMachineTagRequest&, AddMachineTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddMachineTagAsyncHandler;
                typedef Outcome<Error, Model::CloseProVersionResponse> CloseProVersionOutcome;
                typedef std::future<CloseProVersionOutcome> CloseProVersionOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::CloseProVersionRequest&, CloseProVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseProVersionAsyncHandler;
                typedef Outcome<Error, Model::CreateOpenPortTaskResponse> CreateOpenPortTaskOutcome;
                typedef std::future<CreateOpenPortTaskOutcome> CreateOpenPortTaskOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::CreateOpenPortTaskRequest&, CreateOpenPortTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOpenPortTaskAsyncHandler;
                typedef Outcome<Error, Model::CreateProcessTaskResponse> CreateProcessTaskOutcome;
                typedef std::future<CreateProcessTaskOutcome> CreateProcessTaskOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::CreateProcessTaskRequest&, CreateProcessTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcessTaskAsyncHandler;
                typedef Outcome<Error, Model::CreateUsualLoginPlacesResponse> CreateUsualLoginPlacesOutcome;
                typedef std::future<CreateUsualLoginPlacesOutcome> CreateUsualLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::CreateUsualLoginPlacesRequest&, CreateUsualLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsualLoginPlacesAsyncHandler;
                typedef Outcome<Error, Model::DeleteBruteAttacksResponse> DeleteBruteAttacksOutcome;
                typedef std::future<DeleteBruteAttacksOutcome> DeleteBruteAttacksOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteBruteAttacksRequest&, DeleteBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBruteAttacksAsyncHandler;
                typedef Outcome<Error, Model::DeleteLoginWhiteListResponse> DeleteLoginWhiteListOutcome;
                typedef std::future<DeleteLoginWhiteListOutcome> DeleteLoginWhiteListOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteLoginWhiteListRequest&, DeleteLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginWhiteListAsyncHandler;
                typedef Outcome<Error, Model::DeleteMachineResponse> DeleteMachineOutcome;
                typedef std::future<DeleteMachineOutcome> DeleteMachineOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteMachineRequest&, DeleteMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineAsyncHandler;
                typedef Outcome<Error, Model::DeleteMachineTagResponse> DeleteMachineTagOutcome;
                typedef std::future<DeleteMachineTagOutcome> DeleteMachineTagOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteMachineTagRequest&, DeleteMachineTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineTagAsyncHandler;
                typedef Outcome<Error, Model::DeleteMaliciousRequestsResponse> DeleteMaliciousRequestsOutcome;
                typedef std::future<DeleteMaliciousRequestsOutcome> DeleteMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteMaliciousRequestsRequest&, DeleteMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaliciousRequestsAsyncHandler;
                typedef Outcome<Error, Model::DeleteMalwaresResponse> DeleteMalwaresOutcome;
                typedef std::future<DeleteMalwaresOutcome> DeleteMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteMalwaresRequest&, DeleteMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwaresAsyncHandler;
                typedef Outcome<Error, Model::DeleteNonlocalLoginPlacesResponse> DeleteNonlocalLoginPlacesOutcome;
                typedef std::future<DeleteNonlocalLoginPlacesOutcome> DeleteNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteNonlocalLoginPlacesRequest&, DeleteNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Error, Model::DeleteUsualLoginPlacesResponse> DeleteUsualLoginPlacesOutcome;
                typedef std::future<DeleteUsualLoginPlacesOutcome> DeleteUsualLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteUsualLoginPlacesRequest&, DeleteUsualLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsualLoginPlacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountStatisticsResponse> DescribeAccountStatisticsOutcome;
                typedef std::future<DescribeAccountStatisticsOutcome> DescribeAccountStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAccountStatisticsRequest&, DescribeAccountStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAgentVulsResponse> DescribeAgentVulsOutcome;
                typedef std::future<DescribeAgentVulsOutcome> DescribeAgentVulsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAgentVulsRequest&, DescribeAgentVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentVulsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmAttributeResponse> DescribeAlarmAttributeOutcome;
                typedef std::future<DescribeAlarmAttributeOutcome> DescribeAlarmAttributeOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAlarmAttributeRequest&, DescribeAlarmAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmAttributeAsyncHandler;
                typedef Outcome<Error, Model::DescribeBruteAttacksResponse> DescribeBruteAttacksOutcome;
                typedef std::future<DescribeBruteAttacksOutcome> DescribeBruteAttacksOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeBruteAttacksRequest&, DescribeBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttacksAsyncHandler;
                typedef Outcome<Error, Model::DescribeComponentInfoResponse> DescribeComponentInfoOutcome;
                typedef std::future<DescribeComponentInfoOutcome> DescribeComponentInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeComponentInfoRequest&, DescribeComponentInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeComponentStatisticsResponse> DescribeComponentStatisticsOutcome;
                typedef std::future<DescribeComponentStatisticsOutcome> DescribeComponentStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeComponentStatisticsRequest&, DescribeComponentStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeComponentsResponse> DescribeComponentsOutcome;
                typedef std::future<DescribeComponentsOutcome> DescribeComponentsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeComponentsRequest&, DescribeComponentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentsAsyncHandler;
                typedef Outcome<Error, Model::DescribeHistoryAccountsResponse> DescribeHistoryAccountsOutcome;
                typedef std::future<DescribeHistoryAccountsOutcome> DescribeHistoryAccountsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeHistoryAccountsRequest&, DescribeHistoryAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryAccountsAsyncHandler;
                typedef Outcome<Error, Model::DescribeImpactedHostsResponse> DescribeImpactedHostsOutcome;
                typedef std::future<DescribeImpactedHostsOutcome> DescribeImpactedHostsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeImpactedHostsRequest&, DescribeImpactedHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImpactedHostsAsyncHandler;
                typedef Outcome<Error, Model::DescribeLoginWhiteListResponse> DescribeLoginWhiteListOutcome;
                typedef std::future<DescribeLoginWhiteListOutcome> DescribeLoginWhiteListOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeLoginWhiteListRequest&, DescribeLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteListAsyncHandler;
                typedef Outcome<Error, Model::DescribeMachineInfoResponse> DescribeMachineInfoOutcome;
                typedef std::future<DescribeMachineInfoOutcome> DescribeMachineInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeMachineInfoRequest&, DescribeMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeMachinesResponse> DescribeMachinesOutcome;
                typedef std::future<DescribeMachinesOutcome> DescribeMachinesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeMachinesRequest&, DescribeMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesAsyncHandler;
                typedef Outcome<Error, Model::DescribeMaliciousRequestsResponse> DescribeMaliciousRequestsOutcome;
                typedef std::future<DescribeMaliciousRequestsOutcome> DescribeMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeMaliciousRequestsRequest&, DescribeMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaliciousRequestsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMalwaresResponse> DescribeMalwaresOutcome;
                typedef std::future<DescribeMalwaresOutcome> DescribeMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeMalwaresRequest&, DescribeMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwaresAsyncHandler;
                typedef Outcome<Error, Model::DescribeNonlocalLoginPlacesResponse> DescribeNonlocalLoginPlacesOutcome;
                typedef std::future<DescribeNonlocalLoginPlacesOutcome> DescribeNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeNonlocalLoginPlacesRequest&, DescribeNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeOpenPortStatisticsResponse> DescribeOpenPortStatisticsOutcome;
                typedef std::future<DescribeOpenPortStatisticsOutcome> DescribeOpenPortStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeOpenPortStatisticsRequest&, DescribeOpenPortStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPortStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeOpenPortTaskStatusResponse> DescribeOpenPortTaskStatusOutcome;
                typedef std::future<DescribeOpenPortTaskStatusOutcome> DescribeOpenPortTaskStatusOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeOpenPortTaskStatusRequest&, DescribeOpenPortTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPortTaskStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeOpenPortsResponse> DescribeOpenPortsOutcome;
                typedef std::future<DescribeOpenPortsOutcome> DescribeOpenPortsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeOpenPortsRequest&, DescribeOpenPortsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPortsAsyncHandler;
                typedef Outcome<Error, Model::DescribeOverviewStatisticsResponse> DescribeOverviewStatisticsOutcome;
                typedef std::future<DescribeOverviewStatisticsOutcome> DescribeOverviewStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeOverviewStatisticsRequest&, DescribeOverviewStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeProVersionInfoResponse> DescribeProVersionInfoOutcome;
                typedef std::future<DescribeProVersionInfoOutcome> DescribeProVersionInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeProVersionInfoRequest&, DescribeProVersionInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProVersionInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeProcessStatisticsResponse> DescribeProcessStatisticsOutcome;
                typedef std::future<DescribeProcessStatisticsOutcome> DescribeProcessStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeProcessStatisticsRequest&, DescribeProcessStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeProcessTaskStatusResponse> DescribeProcessTaskStatusOutcome;
                typedef std::future<DescribeProcessTaskStatusOutcome> DescribeProcessTaskStatusOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeProcessTaskStatusRequest&, DescribeProcessTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessTaskStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeProcessesResponse> DescribeProcessesOutcome;
                typedef std::future<DescribeProcessesOutcome> DescribeProcessesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeProcessesRequest&, DescribeProcessesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityDynamicsResponse> DescribeSecurityDynamicsOutcome;
                typedef std::future<DescribeSecurityDynamicsOutcome> DescribeSecurityDynamicsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeSecurityDynamicsRequest&, DescribeSecurityDynamicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityDynamicsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityTrendsResponse> DescribeSecurityTrendsOutcome;
                typedef std::future<DescribeSecurityTrendsOutcome> DescribeSecurityTrendsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeSecurityTrendsRequest&, DescribeSecurityTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityTrendsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTagMachinesResponse> DescribeTagMachinesOutcome;
                typedef std::future<DescribeTagMachinesOutcome> DescribeTagMachinesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeTagMachinesRequest&, DescribeTagMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagMachinesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTagsResponse> DescribeTagsOutcome;
                typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeTagsRequest&, DescribeTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
                typedef Outcome<Error, Model::DescribeUsualLoginPlacesResponse> DescribeUsualLoginPlacesOutcome;
                typedef std::future<DescribeUsualLoginPlacesOutcome> DescribeUsualLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeUsualLoginPlacesRequest&, DescribeUsualLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsualLoginPlacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVulInfoResponse> DescribeVulInfoOutcome;
                typedef std::future<DescribeVulInfoOutcome> DescribeVulInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeVulInfoRequest&, DescribeVulInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeVulScanResultResponse> DescribeVulScanResultOutcome;
                typedef std::future<DescribeVulScanResultOutcome> DescribeVulScanResultOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeVulScanResultRequest&, DescribeVulScanResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeVulsResponse> DescribeVulsOutcome;
                typedef std::future<DescribeVulsOutcome> DescribeVulsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeVulsRequest&, DescribeVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulsAsyncHandler;
                typedef Outcome<Error, Model::DescribeWeeklyReportBruteAttacksResponse> DescribeWeeklyReportBruteAttacksOutcome;
                typedef std::future<DescribeWeeklyReportBruteAttacksOutcome> DescribeWeeklyReportBruteAttacksOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportBruteAttacksRequest&, DescribeWeeklyReportBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportBruteAttacksAsyncHandler;
                typedef Outcome<Error, Model::DescribeWeeklyReportInfoResponse> DescribeWeeklyReportInfoOutcome;
                typedef std::future<DescribeWeeklyReportInfoOutcome> DescribeWeeklyReportInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportInfoRequest&, DescribeWeeklyReportInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeWeeklyReportMalwaresResponse> DescribeWeeklyReportMalwaresOutcome;
                typedef std::future<DescribeWeeklyReportMalwaresOutcome> DescribeWeeklyReportMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportMalwaresRequest&, DescribeWeeklyReportMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportMalwaresAsyncHandler;
                typedef Outcome<Error, Model::DescribeWeeklyReportNonlocalLoginPlacesResponse> DescribeWeeklyReportNonlocalLoginPlacesOutcome;
                typedef std::future<DescribeWeeklyReportNonlocalLoginPlacesOutcome> DescribeWeeklyReportNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportNonlocalLoginPlacesRequest&, DescribeWeeklyReportNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeWeeklyReportVulsResponse> DescribeWeeklyReportVulsOutcome;
                typedef std::future<DescribeWeeklyReportVulsOutcome> DescribeWeeklyReportVulsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportVulsRequest&, DescribeWeeklyReportVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportVulsAsyncHandler;
                typedef Outcome<Error, Model::DescribeWeeklyReportsResponse> DescribeWeeklyReportsOutcome;
                typedef std::future<DescribeWeeklyReportsOutcome> DescribeWeeklyReportsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportsRequest&, DescribeWeeklyReportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportsAsyncHandler;
                typedef Outcome<Error, Model::EditTagsResponse> EditTagsOutcome;
                typedef std::future<EditTagsOutcome> EditTagsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::EditTagsRequest&, EditTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditTagsAsyncHandler;
                typedef Outcome<Error, Model::ExportBruteAttacksResponse> ExportBruteAttacksOutcome;
                typedef std::future<ExportBruteAttacksOutcome> ExportBruteAttacksOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportBruteAttacksRequest&, ExportBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBruteAttacksAsyncHandler;
                typedef Outcome<Error, Model::ExportMaliciousRequestsResponse> ExportMaliciousRequestsOutcome;
                typedef std::future<ExportMaliciousRequestsOutcome> ExportMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportMaliciousRequestsRequest&, ExportMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportMaliciousRequestsAsyncHandler;
                typedef Outcome<Error, Model::ExportMalwaresResponse> ExportMalwaresOutcome;
                typedef std::future<ExportMalwaresOutcome> ExportMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportMalwaresRequest&, ExportMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportMalwaresAsyncHandler;
                typedef Outcome<Error, Model::ExportNonlocalLoginPlacesResponse> ExportNonlocalLoginPlacesOutcome;
                typedef std::future<ExportNonlocalLoginPlacesOutcome> ExportNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportNonlocalLoginPlacesRequest&, ExportNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Error, Model::IgnoreImpactedHostsResponse> IgnoreImpactedHostsOutcome;
                typedef std::future<IgnoreImpactedHostsOutcome> IgnoreImpactedHostsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::IgnoreImpactedHostsRequest&, IgnoreImpactedHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreImpactedHostsAsyncHandler;
                typedef Outcome<Error, Model::MisAlarmNonlocalLoginPlacesResponse> MisAlarmNonlocalLoginPlacesOutcome;
                typedef std::future<MisAlarmNonlocalLoginPlacesOutcome> MisAlarmNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::MisAlarmNonlocalLoginPlacesRequest&, MisAlarmNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MisAlarmNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmAttributeResponse> ModifyAlarmAttributeOutcome;
                typedef std::future<ModifyAlarmAttributeOutcome> ModifyAlarmAttributeOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ModifyAlarmAttributeRequest&, ModifyAlarmAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAutoOpenProVersionConfigResponse> ModifyAutoOpenProVersionConfigOutcome;
                typedef std::future<ModifyAutoOpenProVersionConfigOutcome> ModifyAutoOpenProVersionConfigOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ModifyAutoOpenProVersionConfigRequest&, ModifyAutoOpenProVersionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoOpenProVersionConfigAsyncHandler;
                typedef Outcome<Error, Model::ModifyLoginWhiteListResponse> ModifyLoginWhiteListOutcome;
                typedef std::future<ModifyLoginWhiteListOutcome> ModifyLoginWhiteListOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ModifyLoginWhiteListRequest&, ModifyLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginWhiteListAsyncHandler;
                typedef Outcome<Error, Model::ModifyProVersionRenewFlagResponse> ModifyProVersionRenewFlagOutcome;
                typedef std::future<ModifyProVersionRenewFlagOutcome> ModifyProVersionRenewFlagOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ModifyProVersionRenewFlagRequest&, ModifyProVersionRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProVersionRenewFlagAsyncHandler;
                typedef Outcome<Error, Model::OpenProVersionResponse> OpenProVersionOutcome;
                typedef std::future<OpenProVersionOutcome> OpenProVersionOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::OpenProVersionRequest&, OpenProVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenProVersionAsyncHandler;
                typedef Outcome<Error, Model::RecoverMalwaresResponse> RecoverMalwaresOutcome;
                typedef std::future<RecoverMalwaresOutcome> RecoverMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::RecoverMalwaresRequest&, RecoverMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverMalwaresAsyncHandler;
                typedef Outcome<Error, Model::RescanImpactedHostResponse> RescanImpactedHostOutcome;
                typedef std::future<RescanImpactedHostOutcome> RescanImpactedHostOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::RescanImpactedHostRequest&, RescanImpactedHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RescanImpactedHostAsyncHandler;
                typedef Outcome<Error, Model::SeparateMalwaresResponse> SeparateMalwaresOutcome;
                typedef std::future<SeparateMalwaresOutcome> SeparateMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::SeparateMalwaresRequest&, SeparateMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SeparateMalwaresAsyncHandler;
                typedef Outcome<Error, Model::TrustMaliciousRequestResponse> TrustMaliciousRequestOutcome;
                typedef std::future<TrustMaliciousRequestOutcome> TrustMaliciousRequestOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::TrustMaliciousRequestRequest&, TrustMaliciousRequestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrustMaliciousRequestAsyncHandler;
                typedef Outcome<Error, Model::TrustMalwaresResponse> TrustMalwaresOutcome;
                typedef std::future<TrustMalwaresOutcome> TrustMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::TrustMalwaresRequest&, TrustMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrustMalwaresAsyncHandler;
                typedef Outcome<Error, Model::UntrustMaliciousRequestResponse> UntrustMaliciousRequestOutcome;
                typedef std::future<UntrustMaliciousRequestOutcome> UntrustMaliciousRequestOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::UntrustMaliciousRequestRequest&, UntrustMaliciousRequestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UntrustMaliciousRequestAsyncHandler;
                typedef Outcome<Error, Model::UntrustMalwaresResponse> UntrustMalwaresOutcome;
                typedef std::future<UntrustMalwaresOutcome> UntrustMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::UntrustMalwaresRequest&, UntrustMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UntrustMalwaresAsyncHandler;



                /**
                 *This API is used to add a whitelist rule.
                 * @param req AddLoginWhiteListRequest
                 * @return AddLoginWhiteListOutcome
                 */
                AddLoginWhiteListOutcome AddLoginWhiteList(const Model::AddLoginWhiteListRequest &request);
                void AddLoginWhiteListAsync(const Model::AddLoginWhiteListRequest& request, const AddLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLoginWhiteListOutcomeCallable AddLoginWhiteListCallable(const Model::AddLoginWhiteListRequest& request);

                /**
                 *This API is used to add a tag to a server.
                 * @param req AddMachineTagRequest
                 * @return AddMachineTagOutcome
                 */
                AddMachineTagOutcome AddMachineTag(const Model::AddMachineTagRequest &request);
                void AddMachineTagAsync(const Model::AddMachineTagRequest& request, const AddMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddMachineTagOutcomeCallable AddMachineTagCallable(const Model::AddMachineTagRequest& request);

                /**
                 *This API is used to deactivate CWP Pro.
                 * @param req CloseProVersionRequest
                 * @return CloseProVersionOutcome
                 */
                CloseProVersionOutcome CloseProVersion(const Model::CloseProVersionRequest &request);
                void CloseProVersionAsync(const Model::CloseProVersionRequest& request, const CloseProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseProVersionOutcomeCallable CloseProVersionCallable(const Model::CloseProVersionRequest& request);

                /**
                 *This API is used to create a real-time port acquisition task.
                 * @param req CreateOpenPortTaskRequest
                 * @return CreateOpenPortTaskOutcome
                 */
                CreateOpenPortTaskOutcome CreateOpenPortTask(const Model::CreateOpenPortTaskRequest &request);
                void CreateOpenPortTaskAsync(const Model::CreateOpenPortTaskRequest& request, const CreateOpenPortTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOpenPortTaskOutcomeCallable CreateOpenPortTaskCallable(const Model::CreateOpenPortTaskRequest& request);

                /**
                 *This API is used to create a real-time process pulling task.
                 * @param req CreateProcessTaskRequest
                 * @return CreateProcessTaskOutcome
                 */
                CreateProcessTaskOutcome CreateProcessTask(const Model::CreateProcessTaskRequest &request);
                void CreateProcessTaskAsync(const Model::CreateProcessTaskRequest& request, const CreateProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProcessTaskOutcomeCallable CreateProcessTaskCallable(const Model::CreateProcessTaskRequest& request);

                /**
                 *This API is used to add one or more usual login locations.
                 * @param req CreateUsualLoginPlacesRequest
                 * @return CreateUsualLoginPlacesOutcome
                 */
                CreateUsualLoginPlacesOutcome CreateUsualLoginPlaces(const Model::CreateUsualLoginPlacesRequest &request);
                void CreateUsualLoginPlacesAsync(const Model::CreateUsualLoginPlacesRequest& request, const CreateUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUsualLoginPlacesOutcomeCallable CreateUsualLoginPlacesCallable(const Model::CreateUsualLoginPlacesRequest& request);

                /**
                 *This API is used to delete brute force attack records.
                 * @param req DeleteBruteAttacksRequest
                 * @return DeleteBruteAttacksOutcome
                 */
                DeleteBruteAttacksOutcome DeleteBruteAttacks(const Model::DeleteBruteAttacksRequest &request);
                void DeleteBruteAttacksAsync(const Model::DeleteBruteAttacksRequest& request, const DeleteBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBruteAttacksOutcomeCallable DeleteBruteAttacksCallable(const Model::DeleteBruteAttacksRequest& request);

                /**
                 *This API is used to delete a whitelist rule.
                 * @param req DeleteLoginWhiteListRequest
                 * @return DeleteLoginWhiteListOutcome
                 */
                DeleteLoginWhiteListOutcome DeleteLoginWhiteList(const Model::DeleteLoginWhiteListRequest &request);
                void DeleteLoginWhiteListAsync(const Model::DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginWhiteListOutcomeCallable DeleteLoginWhiteListCallable(const Model::DeleteLoginWhiteListRequest& request);

                /**
                 *This API is used to uninstall the CWP agent.
                 * @param req DeleteMachineRequest
                 * @return DeleteMachineOutcome
                 */
                DeleteMachineOutcome DeleteMachine(const Model::DeleteMachineRequest &request);
                void DeleteMachineAsync(const Model::DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineOutcomeCallable DeleteMachineCallable(const Model::DeleteMachineRequest& request);

                /**
                 *This API is used to remove a tag from a server.
                 * @param req DeleteMachineTagRequest
                 * @return DeleteMachineTagOutcome
                 */
                DeleteMachineTagOutcome DeleteMachineTag(const Model::DeleteMachineTagRequest &request);
                void DeleteMachineTagAsync(const Model::DeleteMachineTagRequest& request, const DeleteMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineTagOutcomeCallable DeleteMachineTagCallable(const Model::DeleteMachineTagRequest& request);

                /**
                 *This API is used to delete malicious request records.
                 * @param req DeleteMaliciousRequestsRequest
                 * @return DeleteMaliciousRequestsOutcome
                 */
                DeleteMaliciousRequestsOutcome DeleteMaliciousRequests(const Model::DeleteMaliciousRequestsRequest &request);
                void DeleteMaliciousRequestsAsync(const Model::DeleteMaliciousRequestsRequest& request, const DeleteMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMaliciousRequestsOutcomeCallable DeleteMaliciousRequestsCallable(const Model::DeleteMaliciousRequestsRequest& request);

                /**
                 *This API is used to delete trojan records.
                 * @param req DeleteMalwaresRequest
                 * @return DeleteMalwaresOutcome
                 */
                DeleteMalwaresOutcome DeleteMalwares(const Model::DeleteMalwaresRequest &request);
                void DeleteMalwaresAsync(const Model::DeleteMalwaresRequest& request, const DeleteMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMalwaresOutcomeCallable DeleteMalwaresCallable(const Model::DeleteMalwaresRequest& request);

                /**
                 *This API is used to delete unusual login location records.
                 * @param req DeleteNonlocalLoginPlacesRequest
                 * @return DeleteNonlocalLoginPlacesOutcome
                 */
                DeleteNonlocalLoginPlacesOutcome DeleteNonlocalLoginPlaces(const Model::DeleteNonlocalLoginPlacesRequest &request);
                void DeleteNonlocalLoginPlacesAsync(const Model::DeleteNonlocalLoginPlacesRequest& request, const DeleteNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNonlocalLoginPlacesOutcomeCallable DeleteNonlocalLoginPlacesCallable(const Model::DeleteNonlocalLoginPlacesRequest& request);

                /**
                 *This API is used to delete one or more usual login locations.
                 * @param req DeleteUsualLoginPlacesRequest
                 * @return DeleteUsualLoginPlacesOutcome
                 */
                DeleteUsualLoginPlacesOutcome DeleteUsualLoginPlaces(const Model::DeleteUsualLoginPlacesRequest &request);
                void DeleteUsualLoginPlacesAsync(const Model::DeleteUsualLoginPlacesRequest& request, const DeleteUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsualLoginPlacesOutcomeCallable DeleteUsualLoginPlacesCallable(const Model::DeleteUsualLoginPlacesRequest& request);

                /**
                 *This API is used to get the account statistics list.
                 * @param req DescribeAccountStatisticsRequest
                 * @return DescribeAccountStatisticsOutcome
                 */
                DescribeAccountStatisticsOutcome DescribeAccountStatistics(const Model::DescribeAccountStatisticsRequest &request);
                void DescribeAccountStatisticsAsync(const Model::DescribeAccountStatisticsRequest& request, const DescribeAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountStatisticsOutcomeCallable DescribeAccountStatisticsCallable(const Model::DescribeAccountStatisticsRequest& request);

                /**
                 *This API is used to get the account list.
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *This API is used to get the list of vulnerabilities on a single server.
                 * @param req DescribeAgentVulsRequest
                 * @return DescribeAgentVulsOutcome
                 */
                DescribeAgentVulsOutcome DescribeAgentVuls(const Model::DescribeAgentVulsRequest &request);
                void DescribeAgentVulsAsync(const Model::DescribeAgentVulsRequest& request, const DescribeAgentVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentVulsOutcomeCallable DescribeAgentVulsCallable(const Model::DescribeAgentVulsRequest& request);

                /**
                 *This API is used to get the alarm settings.
                 * @param req DescribeAlarmAttributeRequest
                 * @return DescribeAlarmAttributeOutcome
                 */
                DescribeAlarmAttributeOutcome DescribeAlarmAttribute(const Model::DescribeAlarmAttributeRequest &request);
                void DescribeAlarmAttributeAsync(const Model::DescribeAlarmAttributeRequest& request, const DescribeAlarmAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmAttributeOutcomeCallable DescribeAlarmAttributeCallable(const Model::DescribeAlarmAttributeRequest& request);

                /**
                 *This API is used to get the brute force attack event list.
                 * @param req DescribeBruteAttacksRequest
                 * @return DescribeBruteAttacksOutcome
                 */
                DescribeBruteAttacksOutcome DescribeBruteAttacks(const Model::DescribeBruteAttacksRequest &request);
                void DescribeBruteAttacksAsync(const Model::DescribeBruteAttacksRequest& request, const DescribeBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBruteAttacksOutcomeCallable DescribeBruteAttacksCallable(const Model::DescribeBruteAttacksRequest& request);

                /**
                 *This API is used to get the component information.
                 * @param req DescribeComponentInfoRequest
                 * @return DescribeComponentInfoOutcome
                 */
                DescribeComponentInfoOutcome DescribeComponentInfo(const Model::DescribeComponentInfoRequest &request);
                void DescribeComponentInfoAsync(const Model::DescribeComponentInfoRequest& request, const DescribeComponentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComponentInfoOutcomeCallable DescribeComponentInfoCallable(const Model::DescribeComponentInfoRequest& request);

                /**
                 *This API is used to get the component statistics list.
                 * @param req DescribeComponentStatisticsRequest
                 * @return DescribeComponentStatisticsOutcome
                 */
                DescribeComponentStatisticsOutcome DescribeComponentStatistics(const Model::DescribeComponentStatisticsRequest &request);
                void DescribeComponentStatisticsAsync(const Model::DescribeComponentStatisticsRequest& request, const DescribeComponentStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComponentStatisticsOutcomeCallable DescribeComponentStatisticsCallable(const Model::DescribeComponentStatisticsRequest& request);

                /**
                 *This API is used to get the component list.
                 * @param req DescribeComponentsRequest
                 * @return DescribeComponentsOutcome
                 */
                DescribeComponentsOutcome DescribeComponents(const Model::DescribeComponentsRequest &request);
                void DescribeComponentsAsync(const Model::DescribeComponentsRequest& request, const DescribeComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComponentsOutcomeCallable DescribeComponentsCallable(const Model::DescribeComponentsRequest& request);

                /**
                 *This API is used to get the account change history list.
                 * @param req DescribeHistoryAccountsRequest
                 * @return DescribeHistoryAccountsOutcome
                 */
                DescribeHistoryAccountsOutcome DescribeHistoryAccounts(const Model::DescribeHistoryAccountsRequest &request);
                void DescribeHistoryAccountsAsync(const Model::DescribeHistoryAccountsRequest& request, const DescribeHistoryAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryAccountsOutcomeCallable DescribeHistoryAccountsCallable(const Model::DescribeHistoryAccountsRequest& request);

                /**
                 *This API is used to get the list of servers affected by a vulnerability.
                 * @param req DescribeImpactedHostsRequest
                 * @return DescribeImpactedHostsOutcome
                 */
                DescribeImpactedHostsOutcome DescribeImpactedHosts(const Model::DescribeImpactedHostsRequest &request);
                void DescribeImpactedHostsAsync(const Model::DescribeImpactedHostsRequest& request, const DescribeImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImpactedHostsOutcomeCallable DescribeImpactedHostsCallable(const Model::DescribeImpactedHostsRequest& request);

                /**
                 *This API is used to get the list of login whitelist entries.
                 * @param req DescribeLoginWhiteListRequest
                 * @return DescribeLoginWhiteListOutcome
                 */
                DescribeLoginWhiteListOutcome DescribeLoginWhiteList(const Model::DescribeLoginWhiteListRequest &request);
                void DescribeLoginWhiteListAsync(const Model::DescribeLoginWhiteListRequest& request, const DescribeLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteListOutcomeCallable DescribeLoginWhiteListCallable(const Model::DescribeLoginWhiteListRequest& request);

                /**
                 *This API is used to get server details.
                 * @param req DescribeMachineInfoRequest
                 * @return DescribeMachineInfoOutcome
                 */
                DescribeMachineInfoOutcome DescribeMachineInfo(const Model::DescribeMachineInfoRequest &request);
                void DescribeMachineInfoAsync(const Model::DescribeMachineInfoRequest& request, const DescribeMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineInfoOutcomeCallable DescribeMachineInfoCallable(const Model::DescribeMachineInfoRequest& request);

                /**
                 *This API is used to get the list of servers in a specified region.
                 * @param req DescribeMachinesRequest
                 * @return DescribeMachinesOutcome
                 */
                DescribeMachinesOutcome DescribeMachines(const Model::DescribeMachinesRequest &request);
                void DescribeMachinesAsync(const Model::DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesOutcomeCallable DescribeMachinesCallable(const Model::DescribeMachinesRequest& request);

                /**
                 *This API is used to get malicious request data.
                 * @param req DescribeMaliciousRequestsRequest
                 * @return DescribeMaliciousRequestsOutcome
                 */
                DescribeMaliciousRequestsOutcome DescribeMaliciousRequests(const Model::DescribeMaliciousRequestsRequest &request);
                void DescribeMaliciousRequestsAsync(const Model::DescribeMaliciousRequestsRequest& request, const DescribeMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaliciousRequestsOutcomeCallable DescribeMaliciousRequestsCallable(const Model::DescribeMaliciousRequestsRequest& request);

                /**
                 *This API is used to get the list of trojan events.
                 * @param req DescribeMalwaresRequest
                 * @return DescribeMalwaresOutcome
                 */
                DescribeMalwaresOutcome DescribeMalwares(const Model::DescribeMalwaresRequest &request);
                void DescribeMalwaresAsync(const Model::DescribeMalwaresRequest& request, const DescribeMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwaresOutcomeCallable DescribeMalwaresCallable(const Model::DescribeMalwaresRequest& request);

                /**
                 *This API is used to get unusual login events.
                 * @param req DescribeNonlocalLoginPlacesRequest
                 * @return DescribeNonlocalLoginPlacesOutcome
                 */
                DescribeNonlocalLoginPlacesOutcome DescribeNonlocalLoginPlaces(const Model::DescribeNonlocalLoginPlacesRequest &request);
                void DescribeNonlocalLoginPlacesAsync(const Model::DescribeNonlocalLoginPlacesRequest& request, const DescribeNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNonlocalLoginPlacesOutcomeCallable DescribeNonlocalLoginPlacesCallable(const Model::DescribeNonlocalLoginPlacesRequest& request);

                /**
                 *This API is used to get the statistics on port usage
                 * @param req DescribeOpenPortStatisticsRequest
                 * @return DescribeOpenPortStatisticsOutcome
                 */
                DescribeOpenPortStatisticsOutcome DescribeOpenPortStatistics(const Model::DescribeOpenPortStatisticsRequest &request);
                void DescribeOpenPortStatisticsAsync(const Model::DescribeOpenPortStatisticsRequest& request, const DescribeOpenPortStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpenPortStatisticsOutcomeCallable DescribeOpenPortStatisticsCallable(const Model::DescribeOpenPortStatisticsRequest& request);

                /**
                 *This API is used to get the status of a real-time port pulling task.
                 * @param req DescribeOpenPortTaskStatusRequest
                 * @return DescribeOpenPortTaskStatusOutcome
                 */
                DescribeOpenPortTaskStatusOutcome DescribeOpenPortTaskStatus(const Model::DescribeOpenPortTaskStatusRequest &request);
                void DescribeOpenPortTaskStatusAsync(const Model::DescribeOpenPortTaskStatusRequest& request, const DescribeOpenPortTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpenPortTaskStatusOutcomeCallable DescribeOpenPortTaskStatusCallable(const Model::DescribeOpenPortTaskStatusRequest& request);

                /**
                 *This API is used to get the port list.

                 * @param req DescribeOpenPortsRequest
                 * @return DescribeOpenPortsOutcome
                 */
                DescribeOpenPortsOutcome DescribeOpenPorts(const Model::DescribeOpenPortsRequest &request);
                void DescribeOpenPortsAsync(const Model::DescribeOpenPortsRequest& request, const DescribeOpenPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpenPortsOutcomeCallable DescribeOpenPortsCallable(const Model::DescribeOpenPortsRequest& request);

                /**
                 *This API is used to get the overview statistics of CWP under the current account.
                 * @param req DescribeOverviewStatisticsRequest
                 * @return DescribeOverviewStatisticsOutcome
                 */
                DescribeOverviewStatisticsOutcome DescribeOverviewStatistics(const Model::DescribeOverviewStatisticsRequest &request);
                void DescribeOverviewStatisticsAsync(const Model::DescribeOverviewStatisticsRequest& request, const DescribeOverviewStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewStatisticsOutcomeCallable DescribeOverviewStatisticsCallable(const Model::DescribeOverviewStatisticsRequest& request);

                /**
                 *This API is used to get the CWP Pro information.
                 * @param req DescribeProVersionInfoRequest
                 * @return DescribeProVersionInfoOutcome
                 */
                DescribeProVersionInfoOutcome DescribeProVersionInfo(const Model::DescribeProVersionInfoRequest &request);
                void DescribeProVersionInfoAsync(const Model::DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProVersionInfoOutcomeCallable DescribeProVersionInfoCallable(const Model::DescribeProVersionInfoRequest& request);

                /**
                 *This API is used to get the process statistics list.
                 * @param req DescribeProcessStatisticsRequest
                 * @return DescribeProcessStatisticsOutcome
                 */
                DescribeProcessStatisticsOutcome DescribeProcessStatistics(const Model::DescribeProcessStatisticsRequest &request);
                void DescribeProcessStatisticsAsync(const Model::DescribeProcessStatisticsRequest& request, const DescribeProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessStatisticsOutcomeCallable DescribeProcessStatisticsCallable(const Model::DescribeProcessStatisticsRequest& request);

                /**
                 *This API is used to get the status of a real-time process pulling task.
                 * @param req DescribeProcessTaskStatusRequest
                 * @return DescribeProcessTaskStatusOutcome
                 */
                DescribeProcessTaskStatusOutcome DescribeProcessTaskStatus(const Model::DescribeProcessTaskStatusRequest &request);
                void DescribeProcessTaskStatusAsync(const Model::DescribeProcessTaskStatusRequest& request, const DescribeProcessTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessTaskStatusOutcomeCallable DescribeProcessTaskStatusCallable(const Model::DescribeProcessTaskStatusRequest& request);

                /**
                 *This API is used to get the process list.
                 * @param req DescribeProcessesRequest
                 * @return DescribeProcessesOutcome
                 */
                DescribeProcessesOutcome DescribeProcesses(const Model::DescribeProcessesRequest &request);
                void DescribeProcessesAsync(const Model::DescribeProcessesRequest& request, const DescribeProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessesOutcomeCallable DescribeProcessesCallable(const Model::DescribeProcessesRequest& request);

                /**
                 *This API is used to get the security event message data.
                 * @param req DescribeSecurityDynamicsRequest
                 * @return DescribeSecurityDynamicsOutcome
                 */
                DescribeSecurityDynamicsOutcome DescribeSecurityDynamics(const Model::DescribeSecurityDynamicsRequest &request);
                void DescribeSecurityDynamicsAsync(const Model::DescribeSecurityDynamicsRequest& request, const DescribeSecurityDynamicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityDynamicsOutcomeCallable DescribeSecurityDynamicsCallable(const Model::DescribeSecurityDynamicsRequest& request);

                /**
                 *This API is used to get the security event statistics.
                 * @param req DescribeSecurityTrendsRequest
                 * @return DescribeSecurityTrendsOutcome
                 */
                DescribeSecurityTrendsOutcome DescribeSecurityTrends(const Model::DescribeSecurityTrendsRequest &request);
                void DescribeSecurityTrendsAsync(const Model::DescribeSecurityTrendsRequest& request, const DescribeSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityTrendsOutcomeCallable DescribeSecurityTrendsCallable(const Model::DescribeSecurityTrendsRequest& request);

                /**
                 *This API is used to get the information of servers associated with a specified tag.
                 * @param req DescribeTagMachinesRequest
                 * @return DescribeTagMachinesOutcome
                 */
                DescribeTagMachinesOutcome DescribeTagMachines(const Model::DescribeTagMachinesRequest &request);
                void DescribeTagMachinesAsync(const Model::DescribeTagMachinesRequest& request, const DescribeTagMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagMachinesOutcomeCallable DescribeTagMachinesCallable(const Model::DescribeTagMachinesRequest& request);

                /**
                 *This API is used to get all server tags.
                 * @param req DescribeTagsRequest
                 * @return DescribeTagsOutcome
                 */
                DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest &request);
                void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request);

                /**
                 *This API is used to query usual login locations.
                 * @param req DescribeUsualLoginPlacesRequest
                 * @return DescribeUsualLoginPlacesOutcome
                 */
                DescribeUsualLoginPlacesOutcome DescribeUsualLoginPlaces(const Model::DescribeUsualLoginPlacesRequest &request);
                void DescribeUsualLoginPlacesAsync(const Model::DescribeUsualLoginPlacesRequest& request, const DescribeUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsualLoginPlacesOutcomeCallable DescribeUsualLoginPlacesCallable(const Model::DescribeUsualLoginPlacesRequest& request);

                /**
                 *This API is used to get vulnerability details.
                 * @param req DescribeVulInfoRequest
                 * @return DescribeVulInfoOutcome
                 */
                DescribeVulInfoOutcome DescribeVulInfo(const Model::DescribeVulInfoRequest &request);
                void DescribeVulInfoAsync(const Model::DescribeVulInfoRequest& request, const DescribeVulInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulInfoOutcomeCallable DescribeVulInfoCallable(const Model::DescribeVulInfoRequest& request);

                /**
                 *This API is used to get the vulnerability detection result.

                 * @param req DescribeVulScanResultRequest
                 * @return DescribeVulScanResultOutcome
                 */
                DescribeVulScanResultOutcome DescribeVulScanResult(const Model::DescribeVulScanResultRequest &request);
                void DescribeVulScanResultAsync(const Model::DescribeVulScanResultRequest& request, const DescribeVulScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanResultOutcomeCallable DescribeVulScanResultCallable(const Model::DescribeVulScanResultRequest& request);

                /**
                 *This API is used to get the vulnerability list.
                 * @param req DescribeVulsRequest
                 * @return DescribeVulsOutcome
                 */
                DescribeVulsOutcome DescribeVuls(const Model::DescribeVulsRequest &request);
                void DescribeVulsAsync(const Model::DescribeVulsRequest& request, const DescribeVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulsOutcomeCallable DescribeVulsCallable(const Model::DescribeVulsRequest& request);

                /**
                 *This API is used to get the brute force attack data in the weekly CWP Pro report.
                 * @param req DescribeWeeklyReportBruteAttacksRequest
                 * @return DescribeWeeklyReportBruteAttacksOutcome
                 */
                DescribeWeeklyReportBruteAttacksOutcome DescribeWeeklyReportBruteAttacks(const Model::DescribeWeeklyReportBruteAttacksRequest &request);
                void DescribeWeeklyReportBruteAttacksAsync(const Model::DescribeWeeklyReportBruteAttacksRequest& request, const DescribeWeeklyReportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportBruteAttacksOutcomeCallable DescribeWeeklyReportBruteAttacksCallable(const Model::DescribeWeeklyReportBruteAttacksRequest& request);

                /**
                 *This API is used to get the details in the weekly CWP Pro report.
                 * @param req DescribeWeeklyReportInfoRequest
                 * @return DescribeWeeklyReportInfoOutcome
                 */
                DescribeWeeklyReportInfoOutcome DescribeWeeklyReportInfo(const Model::DescribeWeeklyReportInfoRequest &request);
                void DescribeWeeklyReportInfoAsync(const Model::DescribeWeeklyReportInfoRequest& request, const DescribeWeeklyReportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportInfoOutcomeCallable DescribeWeeklyReportInfoCallable(const Model::DescribeWeeklyReportInfoRequest& request);

                /**
                 *This API is used to get the trojan data in the weekly CWP Pro report.
                 * @param req DescribeWeeklyReportMalwaresRequest
                 * @return DescribeWeeklyReportMalwaresOutcome
                 */
                DescribeWeeklyReportMalwaresOutcome DescribeWeeklyReportMalwares(const Model::DescribeWeeklyReportMalwaresRequest &request);
                void DescribeWeeklyReportMalwaresAsync(const Model::DescribeWeeklyReportMalwaresRequest& request, const DescribeWeeklyReportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportMalwaresOutcomeCallable DescribeWeeklyReportMalwaresCallable(const Model::DescribeWeeklyReportMalwaresRequest& request);

                /**
                 *This API is used to get the unusual login location data in the weekly CWP Pro report.
                 * @param req DescribeWeeklyReportNonlocalLoginPlacesRequest
                 * @return DescribeWeeklyReportNonlocalLoginPlacesOutcome
                 */
                DescribeWeeklyReportNonlocalLoginPlacesOutcome DescribeWeeklyReportNonlocalLoginPlaces(const Model::DescribeWeeklyReportNonlocalLoginPlacesRequest &request);
                void DescribeWeeklyReportNonlocalLoginPlacesAsync(const Model::DescribeWeeklyReportNonlocalLoginPlacesRequest& request, const DescribeWeeklyReportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportNonlocalLoginPlacesOutcomeCallable DescribeWeeklyReportNonlocalLoginPlacesCallable(const Model::DescribeWeeklyReportNonlocalLoginPlacesRequest& request);

                /**
                 *This API is used to get the vulnerability data in the weekly CWP Pro report.

                 * @param req DescribeWeeklyReportVulsRequest
                 * @return DescribeWeeklyReportVulsOutcome
                 */
                DescribeWeeklyReportVulsOutcome DescribeWeeklyReportVuls(const Model::DescribeWeeklyReportVulsRequest &request);
                void DescribeWeeklyReportVulsAsync(const Model::DescribeWeeklyReportVulsRequest& request, const DescribeWeeklyReportVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportVulsOutcomeCallable DescribeWeeklyReportVulsCallable(const Model::DescribeWeeklyReportVulsRequest& request);

                /**
                 *This API is used to get the weekly report list.
                 * @param req DescribeWeeklyReportsRequest
                 * @return DescribeWeeklyReportsOutcome
                 */
                DescribeWeeklyReportsOutcome DescribeWeeklyReports(const Model::DescribeWeeklyReportsRequest &request);
                void DescribeWeeklyReportsAsync(const Model::DescribeWeeklyReportsRequest& request, const DescribeWeeklyReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportsOutcomeCallable DescribeWeeklyReportsCallable(const Model::DescribeWeeklyReportsRequest& request);

                /**
                 *This API is used to add or edit tags.
                 * @param req EditTagsRequest
                 * @return EditTagsOutcome
                 */
                EditTagsOutcome EditTags(const Model::EditTagsRequest &request);
                void EditTagsAsync(const Model::EditTagsRequest& request, const EditTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditTagsOutcomeCallable EditTagsCallable(const Model::EditTagsRequest& request);

                /**
                 *This API is used to export brute force attack records into a CSV file.
                 * @param req ExportBruteAttacksRequest
                 * @return ExportBruteAttacksOutcome
                 */
                ExportBruteAttacksOutcome ExportBruteAttacks(const Model::ExportBruteAttacksRequest &request);
                void ExportBruteAttacksAsync(const Model::ExportBruteAttacksRequest& request, const ExportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBruteAttacksOutcomeCallable ExportBruteAttacksCallable(const Model::ExportBruteAttacksRequest& request);

                /**
                 *This API is used to export the malicious request file into a CSV file for download.
                 * @param req ExportMaliciousRequestsRequest
                 * @return ExportMaliciousRequestsOutcome
                 */
                ExportMaliciousRequestsOutcome ExportMaliciousRequests(const Model::ExportMaliciousRequestsRequest &request);
                void ExportMaliciousRequestsAsync(const Model::ExportMaliciousRequestsRequest& request, const ExportMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportMaliciousRequestsOutcomeCallable ExportMaliciousRequestsCallable(const Model::ExportMaliciousRequestsRequest& request);

                /**
                 *This API is used to export trojan records into a CSV file.
                 * @param req ExportMalwaresRequest
                 * @return ExportMalwaresOutcome
                 */
                ExportMalwaresOutcome ExportMalwares(const Model::ExportMalwaresRequest &request);
                void ExportMalwaresAsync(const Model::ExportMalwaresRequest& request, const ExportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportMalwaresOutcomeCallable ExportMalwaresCallable(const Model::ExportMalwaresRequest& request);

                /**
                 *This API is used to export unusual login location events into a CSV file.
                 * @param req ExportNonlocalLoginPlacesRequest
                 * @return ExportNonlocalLoginPlacesOutcome
                 */
                ExportNonlocalLoginPlacesOutcome ExportNonlocalLoginPlaces(const Model::ExportNonlocalLoginPlacesRequest &request);
                void ExportNonlocalLoginPlacesAsync(const Model::ExportNonlocalLoginPlacesRequest& request, const ExportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportNonlocalLoginPlacesOutcomeCallable ExportNonlocalLoginPlacesCallable(const Model::ExportNonlocalLoginPlacesRequest& request);

                /**
                 *This API is used to ignore one or more vulnerabilities.
                 * @param req IgnoreImpactedHostsRequest
                 * @return IgnoreImpactedHostsOutcome
                 */
                IgnoreImpactedHostsOutcome IgnoreImpactedHosts(const Model::IgnoreImpactedHostsRequest &request);
                void IgnoreImpactedHostsAsync(const Model::IgnoreImpactedHostsRequest& request, const IgnoreImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IgnoreImpactedHostsOutcomeCallable IgnoreImpactedHostsCallable(const Model::IgnoreImpactedHostsRequest& request);

                /**
                 *This API is used to set the current location as the usual login location.
                 * @param req MisAlarmNonlocalLoginPlacesRequest
                 * @return MisAlarmNonlocalLoginPlacesOutcome
                 */
                MisAlarmNonlocalLoginPlacesOutcome MisAlarmNonlocalLoginPlaces(const Model::MisAlarmNonlocalLoginPlacesRequest &request);
                void MisAlarmNonlocalLoginPlacesAsync(const Model::MisAlarmNonlocalLoginPlacesRequest& request, const MisAlarmNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MisAlarmNonlocalLoginPlacesOutcomeCallable MisAlarmNonlocalLoginPlacesCallable(const Model::MisAlarmNonlocalLoginPlacesRequest& request);

                /**
                 *This API is used to modify alarm settings.
                 * @param req ModifyAlarmAttributeRequest
                 * @return ModifyAlarmAttributeOutcome
                 */
                ModifyAlarmAttributeOutcome ModifyAlarmAttribute(const Model::ModifyAlarmAttributeRequest &request);
                void ModifyAlarmAttributeAsync(const Model::ModifyAlarmAttributeRequest& request, const ModifyAlarmAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmAttributeOutcomeCallable ModifyAlarmAttributeCallable(const Model::ModifyAlarmAttributeRequest& request);

                /**
                 *This API is used to set whether to automatically activate CWP Pro for newly added servers.
                 * @param req ModifyAutoOpenProVersionConfigRequest
                 * @return ModifyAutoOpenProVersionConfigOutcome
                 */
                ModifyAutoOpenProVersionConfigOutcome ModifyAutoOpenProVersionConfig(const Model::ModifyAutoOpenProVersionConfigRequest &request);
                void ModifyAutoOpenProVersionConfigAsync(const Model::ModifyAutoOpenProVersionConfigRequest& request, const ModifyAutoOpenProVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoOpenProVersionConfigOutcomeCallable ModifyAutoOpenProVersionConfigCallable(const Model::ModifyAutoOpenProVersionConfigRequest& request);

                /**
                 *This API is used to edit a whitelist rule.
                 * @param req ModifyLoginWhiteListRequest
                 * @return ModifyLoginWhiteListOutcome
                 */
                ModifyLoginWhiteListOutcome ModifyLoginWhiteList(const Model::ModifyLoginWhiteListRequest &request);
                void ModifyLoginWhiteListAsync(const Model::ModifyLoginWhiteListRequest& request, const ModifyLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoginWhiteListOutcomeCallable ModifyLoginWhiteListCallable(const Model::ModifyLoginWhiteListRequest& request);

                /**
                 *This API is used to modify the renewal flag of CWP Pro.
                 * @param req ModifyProVersionRenewFlagRequest
                 * @return ModifyProVersionRenewFlagOutcome
                 */
                ModifyProVersionRenewFlagOutcome ModifyProVersionRenewFlag(const Model::ModifyProVersionRenewFlagRequest &request);
                void ModifyProVersionRenewFlagAsync(const Model::ModifyProVersionRenewFlagRequest& request, const ModifyProVersionRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProVersionRenewFlagOutcomeCallable ModifyProVersionRenewFlagCallable(const Model::ModifyProVersionRenewFlagRequest& request);

                /**
                 *This API is used to activate CWP Pro.
                 * @param req OpenProVersionRequest
                 * @return OpenProVersionOutcome
                 */
                OpenProVersionOutcome OpenProVersion(const Model::OpenProVersionRequest &request);
                void OpenProVersionAsync(const Model::OpenProVersionRequest& request, const OpenProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenProVersionOutcomeCallable OpenProVersionCallable(const Model::OpenProVersionRequest& request);

                /**
                 *This API is used to recover isolated trojan files in a batch.
                 * @param req RecoverMalwaresRequest
                 * @return RecoverMalwaresOutcome
                 */
                RecoverMalwaresOutcome RecoverMalwares(const Model::RecoverMalwaresRequest &request);
                void RecoverMalwaresAsync(const Model::RecoverMalwaresRequest& request, const RecoverMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverMalwaresOutcomeCallable RecoverMalwaresCallable(const Model::RecoverMalwaresRequest& request);

                /**
                 *This API is used to re-scan for vulnerabilities.
                 * @param req RescanImpactedHostRequest
                 * @return RescanImpactedHostOutcome
                 */
                RescanImpactedHostOutcome RescanImpactedHost(const Model::RescanImpactedHostRequest &request);
                void RescanImpactedHostAsync(const Model::RescanImpactedHostRequest& request, const RescanImpactedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RescanImpactedHostOutcomeCallable RescanImpactedHostCallable(const Model::RescanImpactedHostRequest& request);

                /**
                 *This API is used to isolate trojans.
                 * @param req SeparateMalwaresRequest
                 * @return SeparateMalwaresOutcome
                 */
                SeparateMalwaresOutcome SeparateMalwares(const Model::SeparateMalwaresRequest &request);
                void SeparateMalwaresAsync(const Model::SeparateMalwaresRequest& request, const SeparateMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SeparateMalwaresOutcomeCallable SeparateMalwaresCallable(const Model::SeparateMalwaresRequest& request);

                /**
                 *This API is used to trust a malicious request.
                 * @param req TrustMaliciousRequestRequest
                 * @return TrustMaliciousRequestOutcome
                 */
                TrustMaliciousRequestOutcome TrustMaliciousRequest(const Model::TrustMaliciousRequestRequest &request);
                void TrustMaliciousRequestAsync(const Model::TrustMaliciousRequestRequest& request, const TrustMaliciousRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrustMaliciousRequestOutcomeCallable TrustMaliciousRequestCallable(const Model::TrustMaliciousRequestRequest& request);

                /**
                 *This API is used to trust an identified trojan file.
                 * @param req TrustMalwaresRequest
                 * @return TrustMalwaresOutcome
                 */
                TrustMalwaresOutcome TrustMalwares(const Model::TrustMalwaresRequest &request);
                void TrustMalwaresAsync(const Model::TrustMalwaresRequest& request, const TrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrustMalwaresOutcomeCallable TrustMalwaresCallable(const Model::TrustMalwaresRequest& request);

                /**
                 *This API is used to untrust a malicious request.
                 * @param req UntrustMaliciousRequestRequest
                 * @return UntrustMaliciousRequestOutcome
                 */
                UntrustMaliciousRequestOutcome UntrustMaliciousRequest(const Model::UntrustMaliciousRequestRequest &request);
                void UntrustMaliciousRequestAsync(const Model::UntrustMaliciousRequestRequest& request, const UntrustMaliciousRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UntrustMaliciousRequestOutcomeCallable UntrustMaliciousRequestCallable(const Model::UntrustMaliciousRequestRequest& request);

                /**
                 *This API is used to untrust a trojan file.
                 * @param req UntrustMalwaresRequest
                 * @return UntrustMalwaresOutcome
                 */
                UntrustMalwaresOutcome UntrustMalwares(const Model::UntrustMalwaresRequest &request);
                void UntrustMalwaresAsync(const Model::UntrustMalwaresRequest& request, const UntrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UntrustMalwaresOutcomeCallable UntrustMalwaresCallable(const Model::UntrustMalwaresRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_YUNJINGCLIENT_H_
