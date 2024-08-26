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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COSSOURCEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COSSOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * The customer provides cos authentication information.
                */
                class CosSourceInfo : public AbstractModel
                {
                public:
                    CosSourceInfo();
                    ~CosSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretId ID in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置ID in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secretId ID in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取Key in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretKey Key in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secretKey Key in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Path in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosPath Path in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置Path in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cosPath Path in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                private:

                    /**
                     * ID in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * Key in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Path in cos authentication
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COSSOURCEINFO_H_
