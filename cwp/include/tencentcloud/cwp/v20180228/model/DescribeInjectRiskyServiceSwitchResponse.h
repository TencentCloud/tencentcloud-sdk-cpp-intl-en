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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEINJECTRISKYSERVICESWITCHRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEINJECTRISKYSERVICESWITCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RiskMainClass.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeInjectRiskyServiceSwitch response structure.
                */
                class DescribeInjectRiskyServiceSwitchResponse : public AbstractModel
                {
                public:
                    DescribeInjectRiskyServiceSwitchResponse();
                    ~DescribeInjectRiskyServiceSwitchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to inject a Java Webshell into risk service. 0: If a user has not set it, it is not injected by default. 1: Inject. 2: A user specifies not to inject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JavaShellInjectRiskyServiceStatus Whether to inject a Java Webshell into risk service. 0: If a user has not set it, it is not injected by default. 1: Inject. 2: A user specifies not to inject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetJavaShellInjectRiskyServiceStatus() const;

                    /**
                     * 判断参数 JavaShellInjectRiskyServiceStatus 是否已赋值
                     * @return JavaShellInjectRiskyServiceStatus 是否已赋值
                     * 
                     */
                    bool JavaShellInjectRiskyServiceStatusHasBeenSet() const;

                    /**
                     * 获取Whether to inject the host RASP into risk service. 0: If a user has not set it, it is not injected by default. 1: Inject. 2: A user specifies not to inject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RaspInjectRiskyServiceStatus Whether to inject the host RASP into risk service. 0: If a user has not set it, it is not injected by default. 1: Inject. 2: A user specifies not to inject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRaspInjectRiskyServiceStatus() const;

                    /**
                     * 判断参数 RaspInjectRiskyServiceStatus 是否已赋值
                     * @return RaspInjectRiskyServiceStatus 是否已赋值
                     * 
                     */
                    bool RaspInjectRiskyServiceStatusHasBeenSet() const;

                    /**
                     * 获取Total number of risk services.
                     * @return TotalCount Total number of risk services.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Risk Service List
                     * @return List Risk Service List
                     * 
                     */
                    std::vector<RiskMainClass> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * Whether to inject a Java Webshell into risk service. 0: If a user has not set it, it is not injected by default. 1: Inject. 2: A user specifies not to inject.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_javaShellInjectRiskyServiceStatus;
                    bool m_javaShellInjectRiskyServiceStatusHasBeenSet;

                    /**
                     * Whether to inject the host RASP into risk service. 0: If a user has not set it, it is not injected by default. 1: Inject. 2: A user specifies not to inject.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_raspInjectRiskyServiceStatus;
                    bool m_raspInjectRiskyServiceStatusHasBeenSet;

                    /**
                     * Total number of risk services.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Risk Service List
                     */
                    std::vector<RiskMainClass> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEINJECTRISKYSERVICESWITCHRESPONSE_H_
