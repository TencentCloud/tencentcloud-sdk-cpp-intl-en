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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCTASKSTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCTASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Document task status information
                */
                class DocTaskStatus : public AbstractModel
                {
                public:
                    DocTaskStatus();
                    ~DocTaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>List of completed historical task types</p>
                     * @return CompletedTaskTypeList <p>List of completed historical task types</p>
                     * 
                     */
                    std::vector<int64_t> GetCompletedTaskTypeList() const;

                    /**
                     * 设置<p>List of completed historical task types</p>
                     * @param _completedTaskTypeList <p>List of completed historical task types</p>
                     * 
                     */
                    void SetCompletedTaskTypeList(const std::vector<int64_t>& _completedTaskTypeList);

                    /**
                     * 判断参数 CompletedTaskTypeList 是否已赋值
                     * @return CompletedTaskTypeList 是否已赋值
                     * 
                     */
                    bool CompletedTaskTypeListHasBeenSet() const;

                    /**
                     * 获取<p>List of supported task types in progress</p>
                     * @return OngoingTaskTypeList <p>List of supported task types in progress</p>
                     * 
                     */
                    std::vector<int64_t> GetOngoingTaskTypeList() const;

                    /**
                     * 设置<p>List of supported task types in progress</p>
                     * @param _ongoingTaskTypeList <p>List of supported task types in progress</p>
                     * 
                     */
                    void SetOngoingTaskTypeList(const std::vector<int64_t>& _ongoingTaskTypeList);

                    /**
                     * 判断参数 OngoingTaskTypeList 是否已赋值
                     * @return OngoingTaskTypeList 是否已赋值
                     * 
                     */
                    bool OngoingTaskTypeListHasBeenSet() const;

                private:

                    /**
                     * <p>List of completed historical task types</p>
                     */
                    std::vector<int64_t> m_completedTaskTypeList;
                    bool m_completedTaskTypeListHasBeenSet;

                    /**
                     * <p>List of supported task types in progress</p>
                     */
                    std::vector<int64_t> m_ongoingTaskTypeList;
                    bool m_ongoingTaskTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCTASKSTATUS_H_
