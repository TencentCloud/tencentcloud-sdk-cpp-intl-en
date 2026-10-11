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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EXPORTCONFMETA_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EXPORTCONFMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 
                */
                class ExportConfMeta : public AbstractModel
                {
                public:
                    ExportConfMeta();
                    ~ExportConfMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ServiceName 
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置
                     * @param _serviceName 
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
                     * 获取
                     * @return Classification 
                     * 
                     */
                    std::string GetClassification() const;

                    /**
                     * 设置
                     * @param _classification 
                     * 
                     */
                    void SetClassification(const std::string& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                    /**
                     * 获取
                     * @return ServiceVersion 
                     * 
                     */
                    std::string GetServiceVersion() const;

                    /**
                     * 设置
                     * @param _serviceVersion 
                     * 
                     */
                    void SetServiceVersion(const std::string& _serviceVersion);

                    /**
                     * 判断参数 ServiceVersion 是否已赋值
                     * @return ServiceVersion 是否已赋值
                     * 
                     */
                    bool ServiceVersionHasBeenSet() const;

                    /**
                     * 获取
                     * @return Properties 
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置
                     * @param _properties 
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_classification;
                    bool m_classificationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_serviceVersion;
                    bool m_serviceVersionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EXPORTCONFMETA_H_
