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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_TLSVERSION_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_TLSVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * TLS information
                */
                class TLSVersion : public AbstractModel
                {
                public:
                    TLSVersion();
                    ~TLSVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of TLSVERSION

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VersionId ID of TLSVERSION

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVersionId() const;

                    /**
                     * 设置ID of TLSVERSION

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _versionId ID of TLSVERSION

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersionId(const int64_t& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取TLSVERSION's Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VersionName TLSVERSION's Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置TLSVERSION's Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _versionName TLSVERSION's Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                private:

                    /**
                     * ID of TLSVERSION

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * TLSVERSION's Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_TLSVERSION_H_
