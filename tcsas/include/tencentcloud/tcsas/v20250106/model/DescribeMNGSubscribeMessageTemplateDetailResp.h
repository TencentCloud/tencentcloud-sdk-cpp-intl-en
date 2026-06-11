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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATEDETAILRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATEDETAILRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/MNGSubscribeMessageTemplateDetailResp.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini game subscription message template details
                */
                class DescribeMNGSubscribeMessageTemplateDetailResp : public AbstractModel
                {
                public:
                    DescribeMNGSubscribeMessageTemplateDetailResp();
                    ~DescribeMNGSubscribeMessageTemplateDetailResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Creator.</p>
                     * @return CreateUser <p>Creator.</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>Creator.</p>
                     * @param _createUser <p>Creator.</p>
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Scenario description.</p>
                     * @return ScenarioDescription <p>Scenario description.</p>
                     * 
                     */
                    std::string GetScenarioDescription() const;

                    /**
                     * 设置<p>Scenario description.</p>
                     * @param _scenarioDescription <p>Scenario description.</p>
                     * 
                     */
                    void SetScenarioDescription(const std::string& _scenarioDescription);

                    /**
                     * 判断参数 ScenarioDescription 是否已赋值
                     * @return ScenarioDescription 是否已赋值
                     * 
                     */
                    bool ScenarioDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template information.</p>
                     * @return TemplateInfo <p>Subscription message template information.</p>
                     * 
                     */
                    MNGSubscribeMessageTemplateDetailResp GetTemplateInfo() const;

                    /**
                     * 设置<p>Subscription message template information.</p>
                     * @param _templateInfo <p>Subscription message template information.</p>
                     * 
                     */
                    void SetTemplateInfo(const MNGSubscribeMessageTemplateDetailResp& _templateInfo);

                    /**
                     * 判断参数 TemplateInfo 是否已赋值
                     * @return TemplateInfo 是否已赋值
                     * 
                     */
                    bool TemplateInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Creator.</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Scenario description.</p>
                     */
                    std::string m_scenarioDescription;
                    bool m_scenarioDescriptionHasBeenSet;

                    /**
                     * <p>Subscription message template information.</p>
                     */
                    MNGSubscribeMessageTemplateDetailResp m_templateInfo;
                    bool m_templateInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATEDETAILRESP_H_
