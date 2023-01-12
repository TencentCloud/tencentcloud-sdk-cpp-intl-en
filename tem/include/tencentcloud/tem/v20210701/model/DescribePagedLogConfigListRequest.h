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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEPAGEDLOGCONFIGLISTREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEPAGEDLOGCONFIGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribePagedLogConfigList request structure.
                */
                class DescribePagedLogConfigListRequest : public AbstractModel
                {
                public:
                    DescribePagedLogConfigListRequest();
                    ~DescribePagedLogConfigListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param EnvironmentId Environment ID
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param ApplicationId Application ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Application name
                     * @return ApplicationName Application name
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
                     * @param ApplicationName Application name
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Name of the rule
                     * @return Name Name of the rule
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the rule
                     * @param Name Name of the rule
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Default value: 20
                     * @return Limit Number of entries per page. Default value: 20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Default value: 20
                     * @param Limit Number of entries per page. Default value: 20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Paging cursor
                     * @return ContinueToken Paging cursor
                     */
                    std::string GetContinueToken() const;

                    /**
                     * 设置Paging cursor
                     * @param ContinueToken Paging cursor
                     */
                    void SetContinueToken(const std::string& _continueToken);

                    /**
                     * 判断参数 ContinueToken 是否已赋值
                     * @return ContinueToken 是否已赋值
                     */
                    bool ContinueTokenHasBeenSet() const;

                private:

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application name
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Name of the rule
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of entries per page. Default value: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Paging cursor
                     */
                    std::string m_continueToken;
                    bool m_continueTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEPAGEDLOGCONFIGLISTREQUEST_H_
