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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DELETEDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DELETEDOCREQUEST_H_

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
                * DeleteDoc request structure.
                */
                class DeleteDocRequest : public AbstractModel
                {
                public:
                    DeleteDocRequest();
                    ~DeleteDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of document business IDs.
                     * @return DocBizIds List of document business IDs.
                     * 
                     */
                    std::vector<std::string> GetDocBizIds() const;

                    /**
                     * 设置List of document business IDs.
                     * @param _docBizIds List of document business IDs.
                     * 
                     */
                    void SetDocBizIds(const std::vector<std::string>& _docBizIds);

                    /**
                     * 判断参数 DocBizIds 是否已赋值
                     * @return DocBizIds 是否已赋值
                     * 
                     */
                    bool DocBizIdsHasBeenSet() const;

                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                private:

                    /**
                     * List of document business IDs.
                     */
                    std::vector<std::string> m_docBizIds;
                    bool m_docBizIdsHasBeenSet;

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DELETEDOCREQUEST_H_
