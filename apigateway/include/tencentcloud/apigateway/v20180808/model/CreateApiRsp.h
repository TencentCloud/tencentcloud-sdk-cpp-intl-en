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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSP_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSP_H_

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
                * Return of API creation
                */
                class CreateApiRsp : public AbstractModel
                {
                public:
                    CreateApiRsp();
                    ~CreateApiRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiId API ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiId API ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Path
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Path Path
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _path Path
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Request method
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Method Request method
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Request method
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _method Request method
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createdTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Status of the import task
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Status Status of the import task
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the import task
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _status Status of the import task
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Details of the error
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ErrMsg Details of the error
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Details of the error
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _errMsg Details of the error
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取API name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApiName API name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _apiName API name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                private:

                    /**
                     * API ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * Path
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Request method
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Status of the import task
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Details of the error
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * API name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSP_H_
