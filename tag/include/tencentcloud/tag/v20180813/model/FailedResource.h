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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_FAILEDRESOURCE_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_FAILEDRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * Information of failed resources.
This is returned when resource tag binding or unbinding fails.
                */
                class FailedResource : public AbstractModel
                {
                public:
                    FailedResource();
                    ~FailedResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Six-segment descriptions of failed resources
                     * @return Resource Six-segment descriptions of failed resources
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Six-segment descriptions of failed resources
                     * @param Resource Six-segment descriptions of failed resources
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Error code
                     * @return Code Error code
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Error code
                     * @param Code Error code
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return Message Error message
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message
                     * @param Message Error message
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Six-segment descriptions of failed resources
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Error code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_FAILEDRESOURCE_H_
