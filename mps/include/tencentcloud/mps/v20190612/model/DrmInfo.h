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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DRMINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DRMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SimpleAesDrm.h>
#include <tencentcloud/mps/v20190612/model/SpekeDrm.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The DRM encryption details.
                */
                class DrmInfo : public AbstractModel
                {
                public:
                    DrmInfo();
                    ~DrmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encryption type.
<li>simpleaes: AES-128 encryption</li>
<li> widevine</li>
<li>fairplay: not supported for DASH streams</li>
<li> playready</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Encryption type.
<li>simpleaes: AES-128 encryption</li>
<li> widevine</li>
<li>fairplay: not supported for DASH streams</li>
<li> playready</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Encryption type.
<li>simpleaes: AES-128 encryption</li>
<li> widevine</li>
<li>fairplay: not supported for DASH streams</li>
<li> playready</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Encryption type.
<li>simpleaes: AES-128 encryption</li>
<li> widevine</li>
<li>fairplay: not supported for DASH streams</li>
<li> playready</li>
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取The AES-128 encryption details.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SimpleAesDrm The AES-128 encryption details.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    SimpleAesDrm GetSimpleAesDrm() const;

                    /**
                     * 设置The AES-128 encryption details.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _simpleAesDrm The AES-128 encryption details.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSimpleAesDrm(const SimpleAesDrm& _simpleAesDrm);

                    /**
                     * 判断参数 SimpleAesDrm 是否已赋值
                     * @return SimpleAesDrm 是否已赋值
                     * 
                     */
                    bool SimpleAesDrmHasBeenSet() const;

                    /**
                     * 获取Information about FairPlay, WideVine, and PlayReady encryption.
                     * @return SpekeDrm Information about FairPlay, WideVine, and PlayReady encryption.
                     * 
                     */
                    SpekeDrm GetSpekeDrm() const;

                    /**
                     * 设置Information about FairPlay, WideVine, and PlayReady encryption.
                     * @param _spekeDrm Information about FairPlay, WideVine, and PlayReady encryption.
                     * 
                     */
                    void SetSpekeDrm(const SpekeDrm& _spekeDrm);

                    /**
                     * 判断参数 SpekeDrm 是否已赋值
                     * @return SpekeDrm 是否已赋值
                     * 
                     */
                    bool SpekeDrmHasBeenSet() const;

                private:

                    /**
                     * Encryption type.
<li>simpleaes: AES-128 encryption</li>
<li> widevine</li>
<li>fairplay: not supported for DASH streams</li>
<li> playready</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The AES-128 encryption details.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    SimpleAesDrm m_simpleAesDrm;
                    bool m_simpleAesDrmHasBeenSet;

                    /**
                     * Information about FairPlay, WideVine, and PlayReady encryption.
                     */
                    SpekeDrm m_spekeDrm;
                    bool m_spekeDrmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DRMINFO_H_
