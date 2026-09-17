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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_OTHERSPRIVATEACCESS_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_OTHERSPRIVATEACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class OthersPrivateAccess : public AbstractModel
                {
                public:
                    OthersPrivateAccess();
                    ~OthersPrivateAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin-pull authentication configuration switch for other vendors' object storage. Valid values:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
                     * @return Switch Origin-pull authentication configuration switch for other vendors' object storage. Valid values:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Origin-pull authentication configuration switch for other vendors' object storage. Valid values:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
                     * @param _switch Origin-pull authentication configuration switch for other vendors' object storage. Valid values:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
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
                     * 获取
                     * @return AccessKey 
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置
                     * @param _accessKey 
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
                     * 获取
                     * @return SecretKey 
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置
                     * @param _secretKey 
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
                     * 获取
                     * @return Region 
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置
                     * @param _region 
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
                     * 获取
                     * @return Bucket 
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置
                     * @param _bucket 
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
                     * Origin-pull authentication configuration switch for other vendors' object storage. Valid values:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_OTHERSPRIVATEACCESS_H_
