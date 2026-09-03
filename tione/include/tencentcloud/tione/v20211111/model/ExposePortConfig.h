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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_EXPOSEPORTCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_EXPOSEPORTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Exposed port information.
                */
                class ExposePortConfig : public AbstractModel
                {
                public:
                    ExposePortConfig();
                    ~ExposePortConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Enable 
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置
                     * @param _enable 
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取
                     * @return VpcId 
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置
                     * @param _vpcId 
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClbId 
                     * 
                     */
                    std::string GetClbId() const;

                    /**
                     * 设置
                     * @param _clbId 
                     * 
                     */
                    void SetClbId(const std::string& _clbId);

                    /**
                     * 判断参数 ClbId 是否已赋值
                     * @return ClbId 是否已赋值
                     * 
                     */
                    bool ClbIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClbHost 
                     * 
                     */
                    std::string GetClbHost() const;

                    /**
                     * 设置
                     * @param _clbHost 
                     * 
                     */
                    void SetClbHost(const std::string& _clbHost);

                    /**
                     * 判断参数 ClbHost 是否已赋值
                     * @return ClbHost 是否已赋值
                     * 
                     */
                    bool ClbHostHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clbId;
                    bool m_clbIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clbHost;
                    bool m_clbHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_EXPOSEPORTCONFIG_H_
