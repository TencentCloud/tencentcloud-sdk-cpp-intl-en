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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_DNSPODCLIENT_H_
#define TENCENTCLOUD_DNSPOD_V20210323_DNSPODCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateRecordRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateRecordResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteDomainRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteDomainResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteRecordRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteRecordResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordListRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordListResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainRemarkRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainRemarkResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainStatusRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainStatusResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordResponse.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            class DnspodClient : public AbstractClient
            {
            public:
                DnspodClient(const Credential &credential, const std::string &region);
                DnspodClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateDomainResponse> CreateDomainOutcome;
                typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateDomainRequest&, CreateDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordResponse> CreateRecordOutcome;
                typedef std::future<CreateRecordOutcome> CreateRecordOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateRecordRequest&, CreateRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainResponse> DeleteDomainOutcome;
                typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DeleteDomainRequest&, DeleteDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordResponse> DeleteRecordOutcome;
                typedef std::future<DeleteRecordOutcome> DeleteRecordOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DeleteRecordRequest&, DeleteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainResponse> DescribeDomainOutcome;
                typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeDomainRequest&, DescribeDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordResponse> DescribeRecordOutcome;
                typedef std::future<DescribeRecordOutcome> DescribeRecordOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeRecordRequest&, DescribeRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordListResponse> DescribeRecordListOutcome;
                typedef std::future<DescribeRecordListOutcome> DescribeRecordListOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeRecordListRequest&, DescribeRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainRemarkResponse> ModifyDomainRemarkOutcome;
                typedef std::future<ModifyDomainRemarkOutcome> ModifyDomainRemarkOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyDomainRemarkRequest&, ModifyDomainRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainStatusResponse> ModifyDomainStatusOutcome;
                typedef std::future<ModifyDomainStatusOutcome> ModifyDomainStatusOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyDomainStatusRequest&, ModifyDomainStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordResponse> ModifyRecordOutcome;
                typedef std::future<ModifyRecordOutcome> ModifyRecordOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyRecordRequest&, ModifyRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordAsyncHandler;



                /**
                 *This API is used to add a domain.

                 * @param req CreateDomainRequest
                 * @return CreateDomainOutcome
                 */
                CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest &request);
                void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request);

                /**
                 *This API is used to add a record.

                 * @param req CreateRecordRequest
                 * @return CreateRecordOutcome
                 */
                CreateRecordOutcome CreateRecord(const Model::CreateRecordRequest &request);
                void CreateRecordAsync(const Model::CreateRecordRequest& request, const CreateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordOutcomeCallable CreateRecordCallable(const Model::CreateRecordRequest& request);

                /**
                 *This API is used to delete a domain.

                 * @param req DeleteDomainRequest
                 * @return DeleteDomainOutcome
                 */
                DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest &request);
                void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request);

                /**
                 *This API is used to delete a record.
                 * @param req DeleteRecordRequest
                 * @return DeleteRecordOutcome
                 */
                DeleteRecordOutcome DeleteRecord(const Model::DeleteRecordRequest &request);
                void DeleteRecordAsync(const Model::DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordOutcomeCallable DeleteRecordCallable(const Model::DeleteRecordRequest& request);

                /**
                 *This API is used to get the information of a domain.
                 * @param req DescribeDomainRequest
                 * @return DescribeDomainOutcome
                 */
                DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest &request);
                void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request);

                /**
                 *This API is used to get the information of a record.
                 * @param req DescribeRecordRequest
                 * @return DescribeRecordOutcome
                 */
                DescribeRecordOutcome DescribeRecord(const Model::DescribeRecordRequest &request);
                void DescribeRecordAsync(const Model::DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordOutcomeCallable DescribeRecordCallable(const Model::DescribeRecordRequest& request);

                /**
                 *This API is used to get the DNS records of a domain.
                 * @param req DescribeRecordListRequest
                 * @return DescribeRecordListOutcome
                 */
                DescribeRecordListOutcome DescribeRecordList(const Model::DescribeRecordListRequest &request);
                void DescribeRecordListAsync(const Model::DescribeRecordListRequest& request, const DescribeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordListOutcomeCallable DescribeRecordListCallable(const Model::DescribeRecordListRequest& request);

                /**
                 *This API is used to set the remarks of a domain.
                 * @param req ModifyDomainRemarkRequest
                 * @return ModifyDomainRemarkOutcome
                 */
                ModifyDomainRemarkOutcome ModifyDomainRemark(const Model::ModifyDomainRemarkRequest &request);
                void ModifyDomainRemarkAsync(const Model::ModifyDomainRemarkRequest& request, const ModifyDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainRemarkOutcomeCallable ModifyDomainRemarkCallable(const Model::ModifyDomainRemarkRequest& request);

                /**
                 *This API is used to modify the status of a domain.
                 * @param req ModifyDomainStatusRequest
                 * @return ModifyDomainStatusOutcome
                 */
                ModifyDomainStatusOutcome ModifyDomainStatus(const Model::ModifyDomainStatusRequest &request);
                void ModifyDomainStatusAsync(const Model::ModifyDomainStatusRequest& request, const ModifyDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainStatusOutcomeCallable ModifyDomainStatusCallable(const Model::ModifyDomainStatusRequest& request);

                /**
                 *This API is used to modify a record.
                 * @param req ModifyRecordRequest
                 * @return ModifyRecordOutcome
                 */
                ModifyRecordOutcome ModifyRecord(const Model::ModifyRecordRequest &request);
                void ModifyRecordAsync(const Model::ModifyRecordRequest& request, const ModifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordOutcomeCallable ModifyRecordCallable(const Model::ModifyRecordRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_DNSPODCLIENT_H_
