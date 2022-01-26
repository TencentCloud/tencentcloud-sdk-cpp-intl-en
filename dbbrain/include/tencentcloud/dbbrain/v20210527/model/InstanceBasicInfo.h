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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCEBASICINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCEBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Basic instance information.
                */
                class InstanceBasicInfo : public AbstractModel
                {
                public:
                    InstanceBasicInfo();
                    ~InstanceBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param InstanceName Instance name.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Private IP of instance.
                     * @return Vip Private IP of instance.
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private IP of instance.
                     * @param Vip Private IP of instance.
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Private port of instance.
                     * @return Vport Private port of instance.
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Private port of instance.
                     * @param Vport Private port of instance.
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Instance service.
                     * @return Product Instance service.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Instance service.
                     * @param Product Instance service.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Instance engine version.
                     * @return EngineVersion Instance engine version.
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Instance engine version.
                     * @param EngineVersion Instance engine version.
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Private IP of instance.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private port of instance.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Instance service.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Instance engine version.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCEBASICINFO_H_
