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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIGFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIGFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * TESHD parameter configuration.
                */
                class TEHDConfigForUpdate : public AbstractModel
                {
                public:
                    TEHDConfigForUpdate();
                    ~TEHDConfigForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The TSC type. Valid values:
<li>`TEHD-100`: TSC-100 (video TSC). </li>
<li>`TEHD-200`: TSC-200 (audio TSC). </li>
If this parameter is left blank, no modification will be made.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type The TSC type. Valid values:
<li>`TEHD-100`: TSC-100 (video TSC). </li>
<li>`TEHD-200`: TSC-200 (audio TSC). </li>
If this parameter is left blank, no modification will be made.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The TSC type. Valid values:
<li>`TEHD-100`: TSC-100 (video TSC). </li>
<li>`TEHD-200`: TSC-200 (audio TSC). </li>
If this parameter is left blank, no modification will be made.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type The TSC type. Valid values:
<li>`TEHD-100`: TSC-100 (video TSC). </li>
<li>`TEHD-200`: TSC-200 (audio TSC). </li>
If this parameter is left blank, no modification will be made.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The maximum video bitrate. If this parameter is not specified, no modifications will be made.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxVideoBitrate The maximum video bitrate. If this parameter is not specified, no modifications will be made.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxVideoBitrate() const;

                    /**
                     * 设置The maximum video bitrate. If this parameter is not specified, no modifications will be made.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxVideoBitrate The maximum video bitrate. If this parameter is not specified, no modifications will be made.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxVideoBitrate(const int64_t& _maxVideoBitrate);

                    /**
                     * 判断参数 MaxVideoBitrate 是否已赋值
                     * @return MaxVideoBitrate 是否已赋值
                     * 
                     */
                    bool MaxVideoBitrateHasBeenSet() const;

                private:

                    /**
                     * The TSC type. Valid values:
<li>`TEHD-100`: TSC-100 (video TSC). </li>
<li>`TEHD-200`: TSC-200 (audio TSC). </li>
If this parameter is left blank, no modification will be made.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The maximum video bitrate. If this parameter is not specified, no modifications will be made.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxVideoBitrate;
                    bool m_maxVideoBitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIGFORUPDATE_H_
