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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGECODERULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGECODERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * MaxAge status code
                */
                class MaxAgeCodeRule : public AbstractModel
                {
                public:
                    MaxAgeCodeRule();
                    ~MaxAgeCodeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action to execute.
`clear`: Clear the cache-control header.
                     * @return Action Action to execute.
`clear`: Clear the cache-control header.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to execute.
`clear`: Clear the cache-control header.
                     * @param _action Action to execute.
`clear`: Clear the cache-control header.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Specifies the HTTP status code in the range 400-599.
                     * @return StatusCodes Specifies the HTTP status code in the range 400-599.
                     * 
                     */
                    std::vector<std::string> GetStatusCodes() const;

                    /**
                     * 设置Specifies the HTTP status code in the range 400-599.
                     * @param _statusCodes Specifies the HTTP status code in the range 400-599.
                     * 
                     */
                    void SetStatusCodes(const std::vector<std::string>& _statusCodes);

                    /**
                     * 判断参数 StatusCodes 是否已赋值
                     * @return StatusCodes 是否已赋值
                     * 
                     */
                    bool StatusCodesHasBeenSet() const;

                private:

                    /**
                     * Action to execute.
`clear`: Clear the cache-control header.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Specifies the HTTP status code in the range 400-599.
                     */
                    std::vector<std::string> m_statusCodes;
                    bool m_statusCodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGECODERULE_H_
