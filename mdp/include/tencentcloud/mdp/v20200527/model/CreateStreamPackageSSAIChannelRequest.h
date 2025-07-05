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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGESSAICHANNELREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGESSAICHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/SSAIConf.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * CreateStreamPackageSSAIChannel request structure.
                */
                class CreateStreamPackageSSAIChannelRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageSSAIChannelRequest();
                    ~CreateStreamPackageSSAIChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Ad insertion configuration name, globally unique, cannot be repeated with other configurations
                     * @return Name Ad insertion configuration name, globally unique, cannot be repeated with other configurations
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Ad insertion configuration name, globally unique, cannot be repeated with other configurations
                     * @param _name Ad insertion configuration name, globally unique, cannot be repeated with other configurations
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Source stream url prefix
                     * @return ContentSource Source stream url prefix
                     * 
                     */
                    std::string GetContentSource() const;

                    /**
                     * 设置Source stream url prefix
                     * @param _contentSource Source stream url prefix
                     * 
                     */
                    void SetContentSource(const std::string& _contentSource);

                    /**
                     * 判断参数 ContentSource 是否已赋值
                     * @return ContentSource 是否已赋值
                     * 
                     */
                    bool ContentSourceHasBeenSet() const;

                    /**
                     * 获取Ad insertion configuration information
                     * @return SSAIInfo Ad insertion configuration information
                     * 
                     */
                    SSAIConf GetSSAIInfo() const;

                    /**
                     * 设置Ad insertion configuration information
                     * @param _sSAIInfo Ad insertion configuration information
                     * 
                     */
                    void SetSSAIInfo(const SSAIConf& _sSAIInfo);

                    /**
                     * 判断参数 SSAIInfo 是否已赋值
                     * @return SSAIInfo 是否已赋值
                     * 
                     */
                    bool SSAIInfoHasBeenSet() const;

                private:

                    /**
                     * Ad insertion configuration name, globally unique, cannot be repeated with other configurations
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Source stream url prefix
                     */
                    std::string m_contentSource;
                    bool m_contentSourceHasBeenSet;

                    /**
                     * Ad insertion configuration information
                     */
                    SSAIConf m_sSAIInfo;
                    bool m_sSAIInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGESSAICHANNELREQUEST_H_
