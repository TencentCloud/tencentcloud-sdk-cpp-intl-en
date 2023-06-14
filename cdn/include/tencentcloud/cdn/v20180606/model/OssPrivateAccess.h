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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_OSSPRIVATEACCESS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_OSSPRIVATEACCESS_H_

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
                * Access authentication configuration for OSS origin 
                */
                class OssPrivateAccess : public AbstractModel
                {
                public:
                    OssPrivateAccess();
                    ~OssPrivateAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable access authentication. Valid values: `on`, `off`.
                     * @return Switch Whether to enable access authentication. Valid values: `on`, `off`.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable access authentication. Valid values: `on`, `off`.
                     * @param _switch Whether to enable access authentication. Valid values: `on`, `off`.
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
                     * 获取Access ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AccessKey Access ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _accessKey Access ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Key.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SecretKey Key.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _secretKey Key.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Region Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _region Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

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
                     * Whether to enable access authentication. Valid values: `on`, `off`.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Access ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Key.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

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

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_OSSPRIVATEACCESS_H_
