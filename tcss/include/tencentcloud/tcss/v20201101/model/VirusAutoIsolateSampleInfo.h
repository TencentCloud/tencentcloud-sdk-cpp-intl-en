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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSAUTOISOLATESAMPLEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSAUTOISOLATESAMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information of the automatically isolated trojan sample
                */
                class VirusAutoIsolateSampleInfo : public AbstractModel
                {
                public:
                    VirusAutoIsolateSampleInfo();
                    ~VirusAutoIsolateSampleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MD5 checksum of the file
                     * @return MD5 MD5 checksum of the file
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置MD5 checksum of the file
                     * @param MD5 MD5 checksum of the file
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取Virus name
                     * @return VirusName Virus name
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置Virus name
                     * @param VirusName Virus name
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取Last edit time
                     * @return ModifyTime Last edit time
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last edit time
                     * @param ModifyTime Last edit time
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Automatic isolation switch. Valid values: `true` (on); `false` (off).
                     * @return AutoIsolateSwitch Automatic isolation switch. Valid values: `true` (on); `false` (off).
                     */
                    bool GetAutoIsolateSwitch() const;

                    /**
                     * 设置Automatic isolation switch. Valid values: `true` (on); `false` (off).
                     * @param AutoIsolateSwitch Automatic isolation switch. Valid values: `true` (on); `false` (off).
                     */
                    void SetAutoIsolateSwitch(const bool& _autoIsolateSwitch);

                    /**
                     * 判断参数 AutoIsolateSwitch 是否已赋值
                     * @return AutoIsolateSwitch 是否已赋值
                     */
                    bool AutoIsolateSwitchHasBeenSet() const;

                private:

                    /**
                     * MD5 checksum of the file
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * Virus name
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * Last edit time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Automatic isolation switch. Valid values: `true` (on); `false` (off).
                     */
                    bool m_autoIsolateSwitch;
                    bool m_autoIsolateSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSAUTOISOLATESAMPLEINFO_H_
