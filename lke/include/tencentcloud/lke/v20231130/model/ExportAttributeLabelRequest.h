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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTATTRIBUTELABELREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTATTRIBUTELABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttributeFilters.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ExportAttributeLabel request structure.
                */
                class ExportAttributeLabelRequest : public AbstractModel
                {
                public:
                    ExportAttributeLabelRequest();
                    ~ExportAttributeLabelRequest() = default;
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
                     * 获取Login to user's root account (required in integrator mode).
                     * @return LoginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Login to user's root account (required in integrator mode).
                     * @param _loginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取Login to user's sub-account (required in integrator mode).
                     * @return LoginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login to user's sub-account (required in integrator mode).
                     * @param _loginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取Attribute ID.
                     * @return AttributeBizIds Attribute ID.
                     * 
                     */
                    std::vector<std::string> GetAttributeBizIds() const;

                    /**
                     * 设置Attribute ID.
                     * @param _attributeBizIds Attribute ID.
                     * 
                     */
                    void SetAttributeBizIds(const std::vector<std::string>& _attributeBizIds);

                    /**
                     * 判断参数 AttributeBizIds 是否已赋值
                     * @return AttributeBizIds 是否已赋值
                     * 
                     */
                    bool AttributeBizIdsHasBeenSet() const;

                    /**
                     * 获取Export according to the filtered data.
                     * @return Filters Export according to the filtered data.
                     * 
                     */
                    AttributeFilters GetFilters() const;

                    /**
                     * 设置Export according to the filtered data.
                     * @param _filters Export according to the filtered data.
                     * 
                     */
                    void SetFilters(const AttributeFilters& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Login to user's root account (required in integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Login to user's sub-account (required in integrator mode).
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * Attribute ID.
                     */
                    std::vector<std::string> m_attributeBizIds;
                    bool m_attributeBizIdsHasBeenSet;

                    /**
                     * Export according to the filtered data.
                     */
                    AttributeFilters m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTATTRIBUTELABELREQUEST_H_
