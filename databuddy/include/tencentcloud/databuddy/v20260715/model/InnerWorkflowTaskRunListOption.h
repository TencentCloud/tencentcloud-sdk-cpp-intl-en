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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNLISTOPTION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNLISTOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Built-in workflow task run list option (only for FOR_EACH tasks)
                */
                class InnerWorkflowTaskRunListOption : public AbstractModel
                {
                public:
                    InnerWorkflowTaskRunListOption();
                    ~InnerWorkflowTaskRunListOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * @return PageNumber <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * @param _pageNumber <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * @return PageSize <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * @param _pageSize <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Iterative running state, exact matching. Optional, multiple selection (multiple values are in an OR relationship).</p><p>You can enter SUCCESS / FAILED, for example. For details, refer to the return value of the InnerWorkflowTaskRunIteration.RunState field in the API output parameter.</p>
                     * @return RunStates <p>Iterative running state, exact matching. Optional, multiple selection (multiple values are in an OR relationship).</p><p>You can enter SUCCESS / FAILED, for example. For details, refer to the return value of the InnerWorkflowTaskRunIteration.RunState field in the API output parameter.</p>
                     * 
                     */
                    std::vector<std::string> GetRunStates() const;

                    /**
                     * 设置<p>Iterative running state, exact matching. Optional, multiple selection (multiple values are in an OR relationship).</p><p>You can enter SUCCESS / FAILED, for example. For details, refer to the return value of the InnerWorkflowTaskRunIteration.RunState field in the API output parameter.</p>
                     * @param _runStates <p>Iterative running state, exact matching. Optional, multiple selection (multiple values are in an OR relationship).</p><p>You can enter SUCCESS / FAILED, for example. For details, refer to the return value of the InnerWorkflowTaskRunIteration.RunState field in the API output parameter.</p>
                     * 
                     */
                    void SetRunStates(const std::vector<std::string>& _runStates);

                    /**
                     * 判断参数 RunStates 是否已赋值
                     * @return RunStates 是否已赋值
                     * 
                     */
                    bool RunStatesHasBeenSet() const;

                private:

                    /**
                     * <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Iterative running state, exact matching. Optional, multiple selection (multiple values are in an OR relationship).</p><p>You can enter SUCCESS / FAILED, for example. For details, refer to the return value of the InnerWorkflowTaskRunIteration.RunState field in the API output parameter.</p>
                     */
                    std::vector<std::string> m_runStates;
                    bool m_runStatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNLISTOPTION_H_
