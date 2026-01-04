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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuan3DPartJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuan3DPartJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanTo3DProJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanTo3DProJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanTo3DRapidJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanTo3DRapidJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuan3DPartJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuan3DPartJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DProJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DProJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DRapidJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DRapidJobResponse.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            class HunyuanClient : public AbstractClient
            {
            public:
                HunyuanClient(const Credential &credential, const std::string &region);
                HunyuanClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::QueryHunyuan3DPartJobResponse> QueryHunyuan3DPartJobOutcome;
                typedef std::future<QueryHunyuan3DPartJobOutcome> QueryHunyuan3DPartJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::QueryHunyuan3DPartJobRequest&, QueryHunyuan3DPartJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuan3DPartJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuanTo3DProJobResponse> QueryHunyuanTo3DProJobOutcome;
                typedef std::future<QueryHunyuanTo3DProJobOutcome> QueryHunyuanTo3DProJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::QueryHunyuanTo3DProJobRequest&, QueryHunyuanTo3DProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanTo3DProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuanTo3DRapidJobResponse> QueryHunyuanTo3DRapidJobOutcome;
                typedef std::future<QueryHunyuanTo3DRapidJobOutcome> QueryHunyuanTo3DRapidJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::QueryHunyuanTo3DRapidJobRequest&, QueryHunyuanTo3DRapidJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanTo3DRapidJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuan3DPartJobResponse> SubmitHunyuan3DPartJobOutcome;
                typedef std::future<SubmitHunyuan3DPartJobOutcome> SubmitHunyuan3DPartJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::SubmitHunyuan3DPartJobRequest&, SubmitHunyuan3DPartJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuan3DPartJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DProJobResponse> SubmitHunyuanTo3DProJobOutcome;
                typedef std::future<SubmitHunyuanTo3DProJobOutcome> SubmitHunyuanTo3DProJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::SubmitHunyuanTo3DProJobRequest&, SubmitHunyuanTo3DProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DRapidJobResponse> SubmitHunyuanTo3DRapidJobOutcome;
                typedef std::future<SubmitHunyuanTo3DRapidJobOutcome> SubmitHunyuanTo3DRapidJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::SubmitHunyuanTo3DRapidJobRequest&, SubmitHunyuanTo3DRapidJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DRapidJobAsyncHandler;



                /**
                 *This API is used to query the generation task of a component.
                 * @param req QueryHunyuan3DPartJobRequest
                 * @return QueryHunyuan3DPartJobOutcome
                 */
                QueryHunyuan3DPartJobOutcome QueryHunyuan3DPartJob(const Model::QueryHunyuan3DPartJobRequest &request);
                void QueryHunyuan3DPartJobAsync(const Model::QueryHunyuan3DPartJobRequest& request, const QueryHunyuan3DPartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuan3DPartJobOutcomeCallable QueryHunyuan3DPartJobCallable(const Model::QueryHunyuan3DPartJobRequest& request);

                /**
                 *This API is used to intelligently generate 3D content based on the HunYuan Large Model and input text descriptions/images.
This API is used to provide 3 concurrent tasks by default, which can process 3 submitted tasks simultaneously. The next task can be processed only after the previous task is completed.
                 * @param req QueryHunyuanTo3DProJobRequest
                 * @return QueryHunyuanTo3DProJobOutcome
                 */
                QueryHunyuanTo3DProJobOutcome QueryHunyuanTo3DProJob(const Model::QueryHunyuanTo3DProJobRequest &request);
                void QueryHunyuanTo3DProJobAsync(const Model::QueryHunyuanTo3DProJobRequest& request, const QueryHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanTo3DProJobOutcomeCallable QueryHunyuanTo3DProJobCallable(const Model::QueryHunyuanTo3DProJobRequest& request);

                /**
                 *This API is used to intelligently generate 3D content based on the HunYuan Large Model with input text descriptions or images.
This API is used to provide 1 concurrent task by default, which means only 1 submitted task can be processed simultaneously. The next task can be processed only after the previous task is completed.
                 * @param req QueryHunyuanTo3DRapidJobRequest
                 * @return QueryHunyuanTo3DRapidJobOutcome
                 */
                QueryHunyuanTo3DRapidJobOutcome QueryHunyuanTo3DRapidJob(const Model::QueryHunyuanTo3DRapidJobRequest &request);
                void QueryHunyuanTo3DRapidJobAsync(const Model::QueryHunyuanTo3DRapidJobRequest& request, const QueryHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanTo3DRapidJobOutcomeCallable QueryHunyuanTo3DRapidJobCallable(const Model::QueryHunyuanTo3DRapidJobRequest& request);

                /**
                 *This API is used to automatically perform component identification and generation based on the model structure after inputting a 3D model file.
                 * @param req SubmitHunyuan3DPartJobRequest
                 * @return SubmitHunyuan3DPartJobOutcome
                 */
                SubmitHunyuan3DPartJobOutcome SubmitHunyuan3DPartJob(const Model::SubmitHunyuan3DPartJobRequest &request);
                void SubmitHunyuan3DPartJobAsync(const Model::SubmitHunyuan3DPartJobRequest& request, const SubmitHunyuan3DPartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuan3DPartJobOutcomeCallable SubmitHunyuan3DPartJobCallable(const Model::SubmitHunyuan3DPartJobRequest& request);

                /**
                 *This API is used to intelligently generate 3D content based on the HunYuan Large Model and input text descriptions/images.
This API is used to provide 3 concurrent tasks by default. Up to 3 submitted tasks can be processed simultaneously. A new task can be processed only after the previous one is completed.
                 * @param req SubmitHunyuanTo3DProJobRequest
                 * @return SubmitHunyuanTo3DProJobOutcome
                 */
                SubmitHunyuanTo3DProJobOutcome SubmitHunyuanTo3DProJob(const Model::SubmitHunyuanTo3DProJobRequest &request);
                void SubmitHunyuanTo3DProJobAsync(const Model::SubmitHunyuanTo3DProJobRequest& request, const SubmitHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DProJobOutcomeCallable SubmitHunyuanTo3DProJobCallable(const Model::SubmitHunyuanTo3DProJobRequest& request);

                /**
                 *This API is used to intelligently generate 3D content based on the HunYuan Large Model with input text descriptions or images.
This API is used to provide 1 concurrent task by default, which means only 1 submitted task can be processed simultaneously. The next task can be processed only after the previous task is completed.
                 * @param req SubmitHunyuanTo3DRapidJobRequest
                 * @return SubmitHunyuanTo3DRapidJobOutcome
                 */
                SubmitHunyuanTo3DRapidJobOutcome SubmitHunyuanTo3DRapidJob(const Model::SubmitHunyuanTo3DRapidJobRequest &request);
                void SubmitHunyuanTo3DRapidJobAsync(const Model::SubmitHunyuanTo3DRapidJobRequest& request, const SubmitHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DRapidJobOutcomeCallable SubmitHunyuanTo3DRapidJobCallable(const Model::SubmitHunyuanTo3DRapidJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_
