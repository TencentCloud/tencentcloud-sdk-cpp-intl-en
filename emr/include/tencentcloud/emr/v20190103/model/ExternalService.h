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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EXTERNALSERVICE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EXTERNALSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CustomServiceDefine.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Shared component information
                */
                class ExternalService : public AbstractModel
                {
                public:
                    ExternalService();
                    ~ExternalService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shared component type, which can be EMR or CUSTOM
                     * @return ShareType Shared component type, which can be EMR or CUSTOM
                     * 
                     */
                    std::string GetShareType() const;

                    /**
                     * 设置Shared component type, which can be EMR or CUSTOM
                     * @param _shareType Shared component type, which can be EMR or CUSTOM
                     * 
                     */
                    void SetShareType(const std::string& _shareType);

                    /**
                     * 判断参数 ShareType 是否已赋值
                     * @return ShareType 是否已赋值
                     * 
                     */
                    bool ShareTypeHasBeenSet() const;

                    /**
                     * 获取Custom parameters
                     * @return CustomServiceDefineList Custom parameters
                     * 
                     */
                    std::vector<CustomServiceDefine> GetCustomServiceDefineList() const;

                    /**
                     * 设置Custom parameters
                     * @param _customServiceDefineList Custom parameters
                     * 
                     */
                    void SetCustomServiceDefineList(const std::vector<CustomServiceDefine>& _customServiceDefineList);

                    /**
                     * 判断参数 CustomServiceDefineList 是否已赋值
                     * @return CustomServiceDefineList 是否已赋值
                     * 
                     */
                    bool CustomServiceDefineListHasBeenSet() const;

                    /**
                     * 获取Shared component name
                     * @return Service Shared component name
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Shared component name
                     * @param _service Shared component name
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Shared component cluster
                     * @return InstanceId Shared component cluster
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Shared component cluster
                     * @param _instanceId Shared component cluster
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Shared component type, which can be EMR or CUSTOM
                     */
                    std::string m_shareType;
                    bool m_shareTypeHasBeenSet;

                    /**
                     * Custom parameters
                     */
                    std::vector<CustomServiceDefine> m_customServiceDefineList;
                    bool m_customServiceDefineListHasBeenSet;

                    /**
                     * Shared component name
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Shared component cluster
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EXTERNALSERVICE_H_
