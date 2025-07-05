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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPIRESULTSERVICEPARAMETERSINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPIRESULTSERVICEPARAMETERSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ServiceParameter
                */
                class DescribeApiResultServiceParametersInfo : public AbstractModel
                {
                public:
                    DescribeApiResultServiceParametersInfo();
                    ~DescribeApiResultServiceParametersInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API backend service parameter name. This is only applicable when `ServiceType` is `HTTP`. Names of frontend and backend parameters can be different. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name API backend service parameter name. This is only applicable when `ServiceType` is `HTTP`. Names of frontend and backend parameters can be different. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API backend service parameter name. This is only applicable when `ServiceType` is `HTTP`. Names of frontend and backend parameters can be different. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name API backend service parameter name. This is only applicable when `ServiceType` is `HTTP`. Names of frontend and backend parameters can be different. 
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Location of the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`. Configurations of frontend and backend parameters can be different. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Position Location of the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`. Configurations of frontend and backend parameters can be different. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置Location of the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`. Configurations of frontend and backend parameters can be different. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _position Location of the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`. Configurations of frontend and backend parameters can be different. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取Location of the frontend parameter corresponding to the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RelevantRequestParameterPosition Location of the frontend parameter corresponding to the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRelevantRequestParameterPosition() const;

                    /**
                     * 设置Location of the frontend parameter corresponding to the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _relevantRequestParameterPosition Location of the frontend parameter corresponding to the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRelevantRequestParameterPosition(const std::string& _relevantRequestParameterPosition);

                    /**
                     * 判断参数 RelevantRequestParameterPosition 是否已赋值
                     * @return RelevantRequestParameterPosition 是否已赋值
                     * 
                     */
                    bool RelevantRequestParameterPositionHasBeenSet() const;

                    /**
                     * 获取Name of the frontend parameter corresponding to the API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RelevantRequestParameterName Name of the frontend parameter corresponding to the API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRelevantRequestParameterName() const;

                    /**
                     * 设置Name of the frontend parameter corresponding to the API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _relevantRequestParameterName Name of the frontend parameter corresponding to the API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRelevantRequestParameterName(const std::string& _relevantRequestParameterName);

                    /**
                     * 判断参数 RelevantRequestParameterName 是否已赋值
                     * @return RelevantRequestParameterName 是否已赋值
                     * 
                     */
                    bool RelevantRequestParameterNameHasBeenSet() const;

                    /**
                     * 获取Default value of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultValue Default value of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultValue Default value of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取Description of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RelevantRequestParameterDesc Description of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRelevantRequestParameterDesc() const;

                    /**
                     * 设置Description of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _relevantRequestParameterDesc Description of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRelevantRequestParameterDesc(const std::string& _relevantRequestParameterDesc);

                    /**
                     * 判断参数 RelevantRequestParameterDesc 是否已赋值
                     * @return RelevantRequestParameterDesc 是否已赋值
                     * 
                     */
                    bool RelevantRequestParameterDescHasBeenSet() const;

                private:

                    /**
                     * API backend service parameter name. This is only applicable when `ServiceType` is `HTTP`. Names of frontend and backend parameters can be different. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Location of the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`. Configurations of frontend and backend parameters can be different. 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Location of the frontend parameter corresponding to the API backend service parameter, such as `head` This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_relevantRequestParameterPosition;
                    bool m_relevantRequestParameterPositionHasBeenSet;

                    /**
                     * Name of the frontend parameter corresponding to the API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_relevantRequestParameterName;
                    bool m_relevantRequestParameterNameHasBeenSet;

                    /**
                     * Default value of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Description of API backend service parameter. This is only applicable when `ServiceType` is `HTTP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_relevantRequestParameterDesc;
                    bool m_relevantRequestParameterDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPIRESULTSERVICEPARAMETERSINFO_H_
