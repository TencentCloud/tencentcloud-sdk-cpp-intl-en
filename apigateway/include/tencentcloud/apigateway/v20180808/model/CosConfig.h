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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_COSCONFIG_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_COSCONFIG_H_

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
                * COS-type API configuration
                */
                class CosConfig : public AbstractModel
                {
                public:
                    CosConfig();
                    ~CosConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies how the backend COS bucket is called by the API. The frontend request method and Action can be:
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Action Specifies how the backend COS bucket is called by the API. The frontend request method and Action can be:
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Specifies how the backend COS bucket is called by the API. The frontend request method and Action can be:
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _action Specifies how the backend COS bucket is called by the API. The frontend request method and Action can be:
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Backend COS bucket of the API
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BucketName Backend COS bucket of the API
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Backend COS bucket of the API
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _bucketName Backend COS bucket of the API
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable the backend COS signature for the API. It defaults to `false`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Authorization Whether to enable the backend COS signature for the API. It defaults to `false`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAuthorization() const;

                    /**
                     * 设置Whether to enable the backend COS signature for the API. It defaults to `false`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _authorization Whether to enable the backend COS signature for the API. It defaults to `false`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthorization(const bool& _authorization);

                    /**
                     * 判断参数 Authorization 是否已赋值
                     * @return Authorization 是否已赋值
                     * 
                     */
                    bool AuthorizationHasBeenSet() const;

                    /**
                     * 获取The path matching mode of the backend COS service
`BackEndPath`: Match the backend path
`FullPath`: Match the full path

Default: `BackEndPath`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PathMatchMode The path matching mode of the backend COS service
`BackEndPath`: Match the backend path
`FullPath`: Match the full path

Default: `BackEndPath`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPathMatchMode() const;

                    /**
                     * 设置The path matching mode of the backend COS service
`BackEndPath`: Match the backend path
`FullPath`: Match the full path

Default: `BackEndPath`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _pathMatchMode The path matching mode of the backend COS service
`BackEndPath`: Match the backend path
`FullPath`: Match the full path

Default: `BackEndPath`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPathMatchMode(const std::string& _pathMatchMode);

                    /**
                     * 判断参数 PathMatchMode 是否已赋值
                     * @return PathMatchMode 是否已赋值
                     * 
                     */
                    bool PathMatchModeHasBeenSet() const;

                private:

                    /**
                     * Specifies how the backend COS bucket is called by the API. The frontend request method and Action can be:
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Backend COS bucket of the API
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Whether to enable the backend COS signature for the API. It defaults to `false`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * The path matching mode of the backend COS service
`BackEndPath`: Match the backend path
`FullPath`: Match the full path

Default: `BackEndPath`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_pathMatchMode;
                    bool m_pathMatchModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_COSCONFIG_H_
