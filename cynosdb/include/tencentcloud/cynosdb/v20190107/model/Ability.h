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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Functions supported by the cluster
                */
                class Ability : public AbstractModel
                {
                public:
                    Ability();
                    ~Ability() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether a secondary AZ is supported</p>
                     * @return IsSupportSlaveZone <p>Whether a secondary AZ is supported</p>
                     * 
                     */
                    std::string GetIsSupportSlaveZone() const;

                    /**
                     * 设置<p>Whether a secondary AZ is supported</p>
                     * @param _isSupportSlaveZone <p>Whether a secondary AZ is supported</p>
                     * 
                     */
                    void SetIsSupportSlaveZone(const std::string& _isSupportSlaveZone);

                    /**
                     * 判断参数 IsSupportSlaveZone 是否已赋值
                     * @return IsSupportSlaveZone 是否已赋值
                     * 
                     */
                    bool IsSupportSlaveZoneHasBeenSet() const;

                    /**
                     * 获取<p>The causes for no support from the availability zone</p>
                     * @return NonsupportSlaveZoneReason <p>The causes for no support from the availability zone</p>
                     * 
                     */
                    std::string GetNonsupportSlaveZoneReason() const;

                    /**
                     * 设置<p>The causes for no support from the availability zone</p>
                     * @param _nonsupportSlaveZoneReason <p>The causes for no support from the availability zone</p>
                     * 
                     */
                    void SetNonsupportSlaveZoneReason(const std::string& _nonsupportSlaveZoneReason);

                    /**
                     * 判断参数 NonsupportSlaveZoneReason 是否已赋值
                     * @return NonsupportSlaveZoneReason 是否已赋值
                     * 
                     */
                    bool NonsupportSlaveZoneReasonHasBeenSet() const;

                    /**
                     * 获取<p>Whether RO instance is supported</p>
                     * @return IsSupportRo <p>Whether RO instance is supported</p>
                     * 
                     */
                    std::string GetIsSupportRo() const;

                    /**
                     * 设置<p>Whether RO instance is supported</p>
                     * @param _isSupportRo <p>Whether RO instance is supported</p>
                     * 
                     */
                    void SetIsSupportRo(const std::string& _isSupportRo);

                    /**
                     * 判断参数 IsSupportRo 是否已赋值
                     * @return IsSupportRo 是否已赋值
                     * 
                     */
                    bool IsSupportRoHasBeenSet() const;

                    /**
                     * 获取<p>Reasons for no support for RO instances</p>
                     * @return NonsupportRoReason <p>Reasons for no support for RO instances</p>
                     * 
                     */
                    std::string GetNonsupportRoReason() const;

                    /**
                     * 设置<p>Reasons for no support for RO instances</p>
                     * @param _nonsupportRoReason <p>Reasons for no support for RO instances</p>
                     * 
                     */
                    void SetNonsupportRoReason(const std::string& _nonsupportRoReason);

                    /**
                     * 判断参数 NonsupportRoReason 是否已赋值
                     * @return NonsupportRoReason 是否已赋值
                     * 
                     */
                    bool NonsupportRoReasonHasBeenSet() const;

                    /**
                     * 获取<p>Whether manual snapshot backup initiation is supported</p>
                     * @return IsSupportManualSnapshot <p>Whether manual snapshot backup initiation is supported</p>
                     * 
                     */
                    std::string GetIsSupportManualSnapshot() const;

                    /**
                     * 设置<p>Whether manual snapshot backup initiation is supported</p>
                     * @param _isSupportManualSnapshot <p>Whether manual snapshot backup initiation is supported</p>
                     * 
                     */
                    void SetIsSupportManualSnapshot(const std::string& _isSupportManualSnapshot);

                    /**
                     * 判断参数 IsSupportManualSnapshot 是否已赋值
                     * @return IsSupportManualSnapshot 是否已赋值
                     * 
                     */
                    bool IsSupportManualSnapshotHasBeenSet() const;

                    /**
                     * 获取<p>Whether transparent data encryption is supported.</p>
                     * @return IsSupportTransparentDataEncryption <p>Whether transparent data encryption is supported.</p>
                     * 
                     */
                    std::string GetIsSupportTransparentDataEncryption() const;

                    /**
                     * 设置<p>Whether transparent data encryption is supported.</p>
                     * @param _isSupportTransparentDataEncryption <p>Whether transparent data encryption is supported.</p>
                     * 
                     */
                    void SetIsSupportTransparentDataEncryption(const std::string& _isSupportTransparentDataEncryption);

                    /**
                     * 判断参数 IsSupportTransparentDataEncryption 是否已赋值
                     * @return IsSupportTransparentDataEncryption 是否已赋值
                     * 
                     */
                    bool IsSupportTransparentDataEncryptionHasBeenSet() const;

                    /**
                     * 获取<p>Reasons for no support for transparent data encryption</p>
                     * @return NoSupportTransparentDataEncryptionReason <p>Reasons for no support for transparent data encryption</p>
                     * 
                     */
                    std::string GetNoSupportTransparentDataEncryptionReason() const;

                    /**
                     * 设置<p>Reasons for no support for transparent data encryption</p>
                     * @param _noSupportTransparentDataEncryptionReason <p>Reasons for no support for transparent data encryption</p>
                     * 
                     */
                    void SetNoSupportTransparentDataEncryptionReason(const std::string& _noSupportTransparentDataEncryptionReason);

                    /**
                     * 判断参数 NoSupportTransparentDataEncryptionReason 是否已赋值
                     * @return NoSupportTransparentDataEncryptionReason 是否已赋值
                     * 
                     */
                    bool NoSupportTransparentDataEncryptionReasonHasBeenSet() const;

                    /**
                     * 获取<p>Whether manual initiation of logical backup is supported.</p>
                     * @return IsSupportManualLogic <p>Whether manual initiation of logical backup is supported.</p>
                     * 
                     */
                    std::string GetIsSupportManualLogic() const;

                    /**
                     * 设置<p>Whether manual initiation of logical backup is supported.</p>
                     * @param _isSupportManualLogic <p>Whether manual initiation of logical backup is supported.</p>
                     * 
                     */
                    void SetIsSupportManualLogic(const std::string& _isSupportManualLogic);

                    /**
                     * 判断参数 IsSupportManualLogic 是否已赋值
                     * @return IsSupportManualLogic 是否已赋值
                     * 
                     */
                    bool IsSupportManualLogicHasBeenSet() const;

                    /**
                     * 获取<p>Whether global encryption can be enabled</p>
                     * @return IsSupportGlobalEncryption <p>Whether global encryption can be enabled</p>
                     * 
                     */
                    std::string GetIsSupportGlobalEncryption() const;

                    /**
                     * 设置<p>Whether global encryption can be enabled</p>
                     * @param _isSupportGlobalEncryption <p>Whether global encryption can be enabled</p>
                     * 
                     */
                    void SetIsSupportGlobalEncryption(const std::string& _isSupportGlobalEncryption);

                    /**
                     * 判断参数 IsSupportGlobalEncryption 是否已赋值
                     * @return IsSupportGlobalEncryption 是否已赋值
                     * 
                     */
                    bool IsSupportGlobalEncryptionHasBeenSet() const;

                    /**
                     * 获取<p>The causes for no support for global encryption</p>
                     * @return NoSupportGlobalEncryptionReason <p>The causes for no support for global encryption</p>
                     * 
                     */
                    std::string GetNoSupportGlobalEncryptionReason() const;

                    /**
                     * 设置<p>The causes for no support for global encryption</p>
                     * @param _noSupportGlobalEncryptionReason <p>The causes for no support for global encryption</p>
                     * 
                     */
                    void SetNoSupportGlobalEncryptionReason(const std::string& _noSupportGlobalEncryptionReason);

                    /**
                     * 判断参数 NoSupportGlobalEncryptionReason 是否已赋值
                     * @return NoSupportGlobalEncryptionReason 是否已赋值
                     * 
                     */
                    bool NoSupportGlobalEncryptionReasonHasBeenSet() const;

                    /**
                     * 获取<p>Status code for reasons of no support for transparent encryption</p>
                     * @return NoSupportTransparentDataEncryptionReasonCode <p>Status code for reasons of no support for transparent encryption</p>
                     * 
                     */
                    std::string GetNoSupportTransparentDataEncryptionReasonCode() const;

                    /**
                     * 设置<p>Status code for reasons of no support for transparent encryption</p>
                     * @param _noSupportTransparentDataEncryptionReasonCode <p>Status code for reasons of no support for transparent encryption</p>
                     * 
                     */
                    void SetNoSupportTransparentDataEncryptionReasonCode(const std::string& _noSupportTransparentDataEncryptionReasonCode);

                    /**
                     * 判断参数 NoSupportTransparentDataEncryptionReasonCode 是否已赋值
                     * @return NoSupportTransparentDataEncryptionReasonCode 是否已赋值
                     * 
                     */
                    bool NoSupportTransparentDataEncryptionReasonCodeHasBeenSet() const;

                    /**
                     * 获取<p>Status code for the reason why global encryption is not supported</p>
                     * @return NoSupportGlobalEncryptionReasonCode <p>Status code for the reason why global encryption is not supported</p>
                     * 
                     */
                    std::string GetNoSupportGlobalEncryptionReasonCode() const;

                    /**
                     * 设置<p>Status code for the reason why global encryption is not supported</p>
                     * @param _noSupportGlobalEncryptionReasonCode <p>Status code for the reason why global encryption is not supported</p>
                     * 
                     */
                    void SetNoSupportGlobalEncryptionReasonCode(const std::string& _noSupportGlobalEncryptionReasonCode);

                    /**
                     * 判断参数 NoSupportGlobalEncryptionReasonCode 是否已赋值
                     * @return NoSupportGlobalEncryptionReasonCode 是否已赋值
                     * 
                     */
                    bool NoSupportGlobalEncryptionReasonCodeHasBeenSet() const;

                private:

                    /**
                     * <p>Whether a secondary AZ is supported</p>
                     */
                    std::string m_isSupportSlaveZone;
                    bool m_isSupportSlaveZoneHasBeenSet;

                    /**
                     * <p>The causes for no support from the availability zone</p>
                     */
                    std::string m_nonsupportSlaveZoneReason;
                    bool m_nonsupportSlaveZoneReasonHasBeenSet;

                    /**
                     * <p>Whether RO instance is supported</p>
                     */
                    std::string m_isSupportRo;
                    bool m_isSupportRoHasBeenSet;

                    /**
                     * <p>Reasons for no support for RO instances</p>
                     */
                    std::string m_nonsupportRoReason;
                    bool m_nonsupportRoReasonHasBeenSet;

                    /**
                     * <p>Whether manual snapshot backup initiation is supported</p>
                     */
                    std::string m_isSupportManualSnapshot;
                    bool m_isSupportManualSnapshotHasBeenSet;

                    /**
                     * <p>Whether transparent data encryption is supported.</p>
                     */
                    std::string m_isSupportTransparentDataEncryption;
                    bool m_isSupportTransparentDataEncryptionHasBeenSet;

                    /**
                     * <p>Reasons for no support for transparent data encryption</p>
                     */
                    std::string m_noSupportTransparentDataEncryptionReason;
                    bool m_noSupportTransparentDataEncryptionReasonHasBeenSet;

                    /**
                     * <p>Whether manual initiation of logical backup is supported.</p>
                     */
                    std::string m_isSupportManualLogic;
                    bool m_isSupportManualLogicHasBeenSet;

                    /**
                     * <p>Whether global encryption can be enabled</p>
                     */
                    std::string m_isSupportGlobalEncryption;
                    bool m_isSupportGlobalEncryptionHasBeenSet;

                    /**
                     * <p>The causes for no support for global encryption</p>
                     */
                    std::string m_noSupportGlobalEncryptionReason;
                    bool m_noSupportGlobalEncryptionReasonHasBeenSet;

                    /**
                     * <p>Status code for reasons of no support for transparent encryption</p>
                     */
                    std::string m_noSupportTransparentDataEncryptionReasonCode;
                    bool m_noSupportTransparentDataEncryptionReasonCodeHasBeenSet;

                    /**
                     * <p>Status code for the reason why global encryption is not supported</p>
                     */
                    std::string m_noSupportGlobalEncryptionReasonCode;
                    bool m_noSupportGlobalEncryptionReasonCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
