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

#ifndef TENCENTCLOUD_QUOTA_V20241204_QUOTACLIENT_H_
#define TENCENTCLOUD_QUOTA_V20241204_QUOTACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/quota/v20241204/model/CreateAlarmRequest.h>
#include <tencentcloud/quota/v20241204/model/CreateAlarmResponse.h>
#include <tencentcloud/quota/v20241204/model/DeleteAlarmRequest.h>
#include <tencentcloud/quota/v20241204/model/DeleteAlarmResponse.h>
#include <tencentcloud/quota/v20241204/model/DescribeAlarmsRequest.h>
#include <tencentcloud/quota/v20241204/model/DescribeAlarmsResponse.h>
#include <tencentcloud/quota/v20241204/model/EnableAlarmRequest.h>
#include <tencentcloud/quota/v20241204/model/EnableAlarmResponse.h>
#include <tencentcloud/quota/v20241204/model/UpdateAlarmRequest.h>
#include <tencentcloud/quota/v20241204/model/UpdateAlarmResponse.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            class QuotaClient : public AbstractClient
            {
            public:
                QuotaClient(const Credential &credential, const std::string &region);
                QuotaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAlarmResponse> CreateAlarmOutcome;
                typedef std::future<CreateAlarmOutcome> CreateAlarmOutcomeCallable;
                typedef std::function<void(const QuotaClient*, const Model::CreateAlarmRequest&, CreateAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmResponse> DeleteAlarmOutcome;
                typedef std::future<DeleteAlarmOutcome> DeleteAlarmOutcomeCallable;
                typedef std::function<void(const QuotaClient*, const Model::DeleteAlarmRequest&, DeleteAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmsResponse> DescribeAlarmsOutcome;
                typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
                typedef std::function<void(const QuotaClient*, const Model::DescribeAlarmsRequest&, DescribeAlarmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableAlarmResponse> EnableAlarmOutcome;
                typedef std::future<EnableAlarmOutcome> EnableAlarmOutcomeCallable;
                typedef std::function<void(const QuotaClient*, const Model::EnableAlarmRequest&, EnableAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlarmResponse> UpdateAlarmOutcome;
                typedef std::future<UpdateAlarmOutcome> UpdateAlarmOutcomeCallable;
                typedef std::function<void(const QuotaClient*, const Model::UpdateAlarmRequest&, UpdateAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlarmAsyncHandler;



                /**
                 *Add alarm rules
                 * @param req CreateAlarmRequest
                 * @return CreateAlarmOutcome
                 */
                CreateAlarmOutcome CreateAlarm(const Model::CreateAlarmRequest &request);
                void CreateAlarmAsync(const Model::CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmOutcomeCallable CreateAlarmCallable(const Model::CreateAlarmRequest& request);

                /**
                 *Deletes alarm rules
                 * @param req DeleteAlarmRequest
                 * @return DeleteAlarmOutcome
                 */
                DeleteAlarmOutcome DeleteAlarm(const Model::DeleteAlarmRequest &request);
                void DeleteAlarmAsync(const Model::DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmOutcomeCallable DeleteAlarmCallable(const Model::DeleteAlarmRequest& request);

                /**
                 *This API is used to query the alarm rule list.
                 * @param req DescribeAlarmsRequest
                 * @return DescribeAlarmsOutcome
                 */
                DescribeAlarmsOutcome DescribeAlarms(const Model::DescribeAlarmsRequest &request);
                void DescribeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmsOutcomeCallable DescribeAlarmsCallable(const Model::DescribeAlarmsRequest& request);

                /**
                 *This API is used to enable alarm rules.
                 * @param req EnableAlarmRequest
                 * @return EnableAlarmOutcome
                 */
                EnableAlarmOutcome EnableAlarm(const Model::EnableAlarmRequest &request);
                void EnableAlarmAsync(const Model::EnableAlarmRequest& request, const EnableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableAlarmOutcomeCallable EnableAlarmCallable(const Model::EnableAlarmRequest& request);

                /**
                 *Modifies alarm rules
                 * @param req UpdateAlarmRequest
                 * @return UpdateAlarmOutcome
                 */
                UpdateAlarmOutcome UpdateAlarm(const Model::UpdateAlarmRequest &request);
                void UpdateAlarmAsync(const Model::UpdateAlarmRequest& request, const UpdateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAlarmOutcomeCallable UpdateAlarmCallable(const Model::UpdateAlarmRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_QUOTACLIENT_H_
