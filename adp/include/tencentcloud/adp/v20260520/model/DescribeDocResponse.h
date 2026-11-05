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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DocLink.h>
#include <tencentcloud/adp/v20260520/model/DocParseConfig.h>
#include <tencentcloud/adp/v20260520/model/DocSummary.h>
#include <tencentcloud/adp/v20260520/model/DocSwitch.h>
#include <tencentcloud/adp/v20260520/model/DocUpdatePeriod.h>
#include <tencentcloud/adp/v20260520/model/UserAccessConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeDoc response structure.
                */
                class DescribeDocResponse : public AbstractModel
                {
                public:
                    DescribeDocResponse();
                    ~DescribeDocResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Documentation link (external URL + COS link)</p>
                     * @return DocLink <p>Documentation link (external URL + COS link)</p>
                     * 
                     */
                    DocLink GetDocLink() const;

                    /**
                     * 判断参数 DocLink 是否已赋值
                     * @return DocLink 是否已赋值
                     * 
                     */
                    bool DocLinkHasBeenSet() const;

                    /**
                     * 获取<p>Parsing configuration (split rule, content filtering, etc.)</p>
                     * @return ParseConfig <p>Parsing configuration (split rule, content filtering, etc.)</p>
                     * 
                     */
                    DocParseConfig GetParseConfig() const;

                    /**
                     * 判断参数 ParseConfig 是否已赋值
                     * @return ParseConfig 是否已赋值
                     * 
                     */
                    bool ParseConfigHasBeenSet() const;

                    /**
                     * 获取<p>Basic document information</p>
                     * @return Summary <p>Basic document information</p>
                     * 
                     */
                    DocSummary GetSummary() const;

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>Switch configuration</p>
                     * @return Switch <p>Switch configuration</p>
                     * 
                     */
                    DocSwitch GetSwitch() const;

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>Update cycle configuration</p>
                     * @return UpdatePeriod <p>Update cycle configuration</p>
                     * 
                     */
                    DocUpdatePeriod GetUpdatePeriod() const;

                    /**
                     * 判断参数 UpdatePeriod 是否已赋值
                     * @return UpdatePeriod 是否已赋值
                     * 
                     */
                    bool UpdatePeriodHasBeenSet() const;

                    /**
                     * 获取<p>User access configuration</p>
                     * @return UserAccessConfig <p>User access configuration</p>
                     * 
                     */
                    UserAccessConfig GetUserAccessConfig() const;

                    /**
                     * 判断参数 UserAccessConfig 是否已赋值
                     * @return UserAccessConfig 是否已赋值
                     * 
                     */
                    bool UserAccessConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Documentation link (external URL + COS link)</p>
                     */
                    DocLink m_docLink;
                    bool m_docLinkHasBeenSet;

                    /**
                     * <p>Parsing configuration (split rule, content filtering, etc.)</p>
                     */
                    DocParseConfig m_parseConfig;
                    bool m_parseConfigHasBeenSet;

                    /**
                     * <p>Basic document information</p>
                     */
                    DocSummary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>Switch configuration</p>
                     */
                    DocSwitch m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Update cycle configuration</p>
                     */
                    DocUpdatePeriod m_updatePeriod;
                    bool m_updatePeriodHasBeenSet;

                    /**
                     * <p>User access configuration</p>
                     */
                    UserAccessConfig m_userAccessConfig;
                    bool m_userAccessConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCRESPONSE_H_
