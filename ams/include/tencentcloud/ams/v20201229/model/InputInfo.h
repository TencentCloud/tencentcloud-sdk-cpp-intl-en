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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_INPUTINFO_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_INPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/BucketInfo.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Input information details
                */
                class InputInfo : public AbstractModel
                {
                public:
                    InputInfo();
                    ~InputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field indicates the file access type. Valid values: **URL** (resource link), **COS** (Tencent Cloud COS).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Type This field indicates the file access type. Valid values: **URL** (resource link), **COS** (Tencent Cloud COS).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置This field indicates the file access type. Valid values: **URL** (resource link), **COS** (Tencent Cloud COS).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _type This field indicates the file access type. Valid values: **URL** (resource link), **COS** (Tencent Cloud COS).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取This field indicates the link address for file access in standard URL format.<br>Note: when `Type` is `URL`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url This field indicates the link address for file access in standard URL format.<br>Note: when `Type` is `URL`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置This field indicates the link address for file access in standard URL format.<br>Note: when `Type` is `URL`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _url This field indicates the link address for file access in standard URL format.<br>Note: when `Type` is `URL`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取This field indicates the Tencent Cloud bucket information for file access.<br>Note: when `Type` is `COS`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BucketInfo This field indicates the Tencent Cloud bucket information for file access.<br>Note: when `Type` is `COS`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BucketInfo GetBucketInfo() const;

                    /**
                     * 设置This field indicates the Tencent Cloud bucket information for file access.<br>Note: when `Type` is `COS`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bucketInfo This field indicates the Tencent Cloud bucket information for file access.<br>Note: when `Type` is `COS`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBucketInfo(const BucketInfo& _bucketInfo);

                    /**
                     * 判断参数 BucketInfo 是否已赋值
                     * @return BucketInfo 是否已赋值
                     * 
                     */
                    bool BucketInfoHasBeenSet() const;

                private:

                    /**
                     * This field indicates the file access type. Valid values: **URL** (resource link), **COS** (Tencent Cloud COS).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This field indicates the link address for file access in standard URL format.<br>Note: when `Type` is `URL`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * This field indicates the Tencent Cloud bucket information for file access.<br>Note: when `Type` is `COS`, this field will not be empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    BucketInfo m_bucketInfo;
                    bool m_bucketInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_INPUTINFO_H_
