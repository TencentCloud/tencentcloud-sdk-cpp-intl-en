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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEVIOLATIONDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEVIOLATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Instance violation details.
                */
                class InstanceViolationDetail : public AbstractModel
                {
                public:
                    InstanceViolationDetail();
                    ~InstanceViolationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取 Source: RESTRICT: Banned; FREEZW: Frozen.
                     * @return Source  Source: RESTRICT: Banned; FREEZW: Frozen.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置 Source: RESTRICT: Banned; FREEZW: Frozen.
                     * @param _source  Source: RESTRICT: Banned; FREEZW: Frozen.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Whether self-service unblocking is allowed. 1: Yes; 2: No.
                     * @return State Whether self-service unblocking is allowed. 1: Yes; 2: No.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Whether self-service unblocking is allowed. 1: Yes; 2: No.
                     * @param _state Whether self-service unblocking is allowed. 1: Yes; 2: No.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Violation type.
                     * @return Reason Violation type.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Violation type.
                     * @param _reason Violation type.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Violation content (URL and associated domain name).
                     * @return Content Violation content (URL and associated domain name).
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Violation content (URL and associated domain name).
                     * @param _content Violation content (URL and associated domain name).
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     *  Source: RESTRICT: Banned; FREEZW: Frozen.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Whether self-service unblocking is allowed. 1: Yes; 2: No.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Violation type.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Violation content (URL and associated domain name).
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEVIOLATIONDETAIL_H_
