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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_AVAILABLEAPIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_AVAILABLEAPIINFO_H_

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
                * Information of the APIs that can use this plugin
                */
                class AvailableApiInfo : public AbstractModel
                {
                public:
                    AvailableApiInfo();
                    ~AvailableApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API ID
                     * @return ApiId API ID
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
                     * @param _apiId API ID
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取API name
                     * @return ApiName API name
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name
                     * @param _apiName API name
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取API type
                     * @return ApiType API type
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API type
                     * @param _apiType API type
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API path
                     * @return Path API path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API path
                     * @param _path API path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API method
                     * @return Method API method
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API method
                     * @param _method API method
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Whether the API is bound with another plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AttachedOtherPlugin Whether the API is bound with another plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAttachedOtherPlugin() const;

                    /**
                     * 设置Whether the API is bound with another plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _attachedOtherPlugin Whether the API is bound with another plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttachedOtherPlugin(const bool& _attachedOtherPlugin);

                    /**
                     * 判断参数 AttachedOtherPlugin 是否已赋值
                     * @return AttachedOtherPlugin 是否已赋值
                     * 
                     */
                    bool AttachedOtherPluginHasBeenSet() const;

                    /**
                     * 获取Whether the API is bound with the current plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsAttached Whether the API is bound with the current plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsAttached() const;

                    /**
                     * 设置Whether the API is bound with the current plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isAttached Whether the API is bound with the current plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsAttached(const bool& _isAttached);

                    /**
                     * 判断参数 IsAttached 是否已赋值
                     * @return IsAttached 是否已赋值
                     * 
                     */
                    bool IsAttachedHasBeenSet() const;

                private:

                    /**
                     * API ID
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API name
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API type
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API method
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Whether the API is bound with another plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_attachedOtherPlugin;
                    bool m_attachedOtherPluginHasBeenSet;

                    /**
                     * Whether the API is bound with the current plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isAttached;
                    bool m_isAttachedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_AVAILABLEAPIINFO_H_
