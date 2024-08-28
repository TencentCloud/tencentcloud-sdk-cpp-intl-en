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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CLOUDPROTECTSERVICE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CLOUDPROTECTSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 
                */
                class CloudProtectService : public AbstractModel
                {
                public:
                    CloudProtectService();
                    ~CloudProtectService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Type: new purchase in this case
                     * @return Type Type: new purchase in this case
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type: new purchase in this case
                     * @param _type Type: new purchase in this case
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Configuration: information of purchased configuration
                     * @return Config Configuration: information of purchased configuration
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Configuration: information of purchased configuration
                     * @param _config Configuration: information of purchased configuration
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Service name
                     * @return ServiceName Service name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name
                     * @param _serviceName Service name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Time of purchase
                     * @return BeginTime Time of purchase
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Time of purchase
                     * @param _beginTime Time of purchase
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Type: new purchase in this case
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Configuration: information of purchased configuration
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Service name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Time of purchase
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CLOUDPROTECTSERVICE_H_
