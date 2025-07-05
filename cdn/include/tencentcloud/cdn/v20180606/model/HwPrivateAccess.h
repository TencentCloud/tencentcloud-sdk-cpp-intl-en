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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HWPRIVATEACCESS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HWPRIVATEACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Origin-pull authentication for Huawei Cloud OBS origin
                */
                class HwPrivateAccess : public AbstractModel
                {
                public:
                    HwPrivateAccess();
                    ~HwPrivateAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取 Whether to enable origin-pull authentication for Huawei Cloud OBS origin. Values:
`on`: Enable
`off`: Disable
                     * @return Switch  Whether to enable origin-pull authentication for Huawei Cloud OBS origin. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置 Whether to enable origin-pull authentication for Huawei Cloud OBS origin. Values:
`on`: Enable
`off`: Disable
                     * @param _switch  Whether to enable origin-pull authentication for Huawei Cloud OBS origin. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Access ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AccessKey Access ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _accessKey Access ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Key
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SecretKey Key
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _secretKey Key
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取BucketName
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Bucket BucketName
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置BucketName
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _bucket BucketName
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                private:

                    /**
                     *  Whether to enable origin-pull authentication for Huawei Cloud OBS origin. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Access ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Key
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * BucketName
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HWPRIVATEACCESS_H_
