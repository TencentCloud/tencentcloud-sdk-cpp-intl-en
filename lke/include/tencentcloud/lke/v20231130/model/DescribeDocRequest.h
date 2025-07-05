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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeDoc request structure.
                */
                class DescribeDocRequest : public AbstractModel
                {
                public:
                    DescribeDocRequest();
                    ~DescribeDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return BotBizId Application ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID
                     * @param _botBizId Application ID
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Document ID.
                     * @return DocBizId Document ID.
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置Document ID.
                     * @param _docBizId Document ID.
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Document ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEDOCREQUEST_H_
