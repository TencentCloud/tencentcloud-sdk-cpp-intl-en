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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GROUPDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GROUPDOCREQUEST_H_

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
                * GroupDoc request structure.
                */
                class GroupDocRequest : public AbstractModel
                {
                public:
                    GroupDocRequest();
                    ~GroupDocRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取List of business IDs of operation objects.
                     * @return BizIds List of business IDs of operation objects.
                     * 
                     */
                    std::vector<std::string> GetBizIds() const;

                    /**
                     * 设置List of business IDs of operation objects.
                     * @param _bizIds List of business IDs of operation objects.
                     * 
                     */
                    void SetBizIds(const std::vector<std::string>& _bizIds);

                    /**
                     * 判断参数 BizIds 是否已赋值
                     * @return BizIds 是否已赋值
                     * 
                     */
                    bool BizIdsHasBeenSet() const;

                    /**
                     * 获取Group ID.
                     * @return CateBizId Group ID.
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置Group ID.
                     * @param _cateBizId Group ID.
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * List of business IDs of operation objects.
                     */
                    std::vector<std::string> m_bizIds;
                    bool m_bizIdsHasBeenSet;

                    /**
                     * Group ID.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GROUPDOCREQUEST_H_
