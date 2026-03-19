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
                * Features supported by the cluster
                */
                class Ability : public AbstractModel
                {
                public:
                    Ability();
                    ~Ability() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether secondary AZ is supported
                     * @return IsSupportSlaveZone Whether secondary AZ is supported
                     * 
                     */
                    std::string GetIsSupportSlaveZone() const;

                    /**
                     * 设置Whether secondary AZ is supported
                     * @param _isSupportSlaveZone Whether secondary AZ is supported
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
                     * 获取The causes for no support from an availability zone.
                     * @return NonsupportSlaveZoneReason The causes for no support from an availability zone.
                     * 
                     */
                    std::string GetNonsupportSlaveZoneReason() const;

                    /**
                     * 设置The causes for no support from an availability zone.
                     * @param _nonsupportSlaveZoneReason The causes for no support from an availability zone.
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
                     * 获取Whether read-only instance is supported
                     * @return IsSupportRo Whether read-only instance is supported
                     * 
                     */
                    std::string GetIsSupportRo() const;

                    /**
                     * 设置Whether read-only instance is supported
                     * @param _isSupportRo Whether read-only instance is supported
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
                     * 获取Reasons why RO instances are not supported.
                     * @return NonsupportRoReason Reasons why RO instances are not supported.
                     * 
                     */
                    std::string GetNonsupportRoReason() const;

                    /**
                     * 设置Reasons why RO instances are not supported.
                     * @param _nonsupportRoReason Reasons why RO instances are not supported.
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
                     * 获取Whether manual snapshot backup initiation is supported.
                     * @return IsSupportManualSnapshot Whether manual snapshot backup initiation is supported.
                     * 
                     */
                    std::string GetIsSupportManualSnapshot() const;

                    /**
                     * 设置Whether manual snapshot backup initiation is supported.
                     * @param _isSupportManualSnapshot Whether manual snapshot backup initiation is supported.
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
                     * 获取Whether transparent data encryption is supported.
                     * @return IsSupportTransparentDataEncryption Whether transparent data encryption is supported.
                     * 
                     */
                    std::string GetIsSupportTransparentDataEncryption() const;

                    /**
                     * 设置Whether transparent data encryption is supported.
                     * @param _isSupportTransparentDataEncryption Whether transparent data encryption is supported.
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
                     * 获取Reasons for no support of transparent data encryption.
                     * @return NoSupportTransparentDataEncryptionReason Reasons for no support of transparent data encryption.
                     * 
                     */
                    std::string GetNoSupportTransparentDataEncryptionReason() const;

                    /**
                     * 设置Reasons for no support of transparent data encryption.
                     * @param _noSupportTransparentDataEncryptionReason Reasons for no support of transparent data encryption.
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
                     * 获取Whether manual initiation of logical backup is supported.
                     * @return IsSupportManualLogic Whether manual initiation of logical backup is supported.
                     * 
                     */
                    std::string GetIsSupportManualLogic() const;

                    /**
                     * 设置Whether manual initiation of logical backup is supported.
                     * @param _isSupportManualLogic Whether manual initiation of logical backup is supported.
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
                     * 获取Enable global encryption.
                     * @return IsSupportGlobalEncryption Enable global encryption.
                     * 
                     */
                    std::string GetIsSupportGlobalEncryption() const;

                    /**
                     * 设置Enable global encryption.
                     * @param _isSupportGlobalEncryption Enable global encryption.
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
                     * 获取The causes for unsupported global encryption.
                     * @return NoSupportGlobalEncryptionReason The causes for unsupported global encryption.
                     * 
                     */
                    std::string GetNoSupportGlobalEncryptionReason() const;

                    /**
                     * 设置The causes for unsupported global encryption.
                     * @param _noSupportGlobalEncryptionReason The causes for unsupported global encryption.
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
                     * 获取Status code for unsupported tde reason.
                     * @return NoSupportTransparentDataEncryptionReasonCode Status code for unsupported tde reason.
                     * 
                     */
                    std::string GetNoSupportTransparentDataEncryptionReasonCode() const;

                    /**
                     * 设置Status code for unsupported tde reason.
                     * @param _noSupportTransparentDataEncryptionReasonCode Status code for unsupported tde reason.
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
                     * 获取Status code for unsupported global encryption.
                     * @return NoSupportGlobalEncryptionReasonCode Status code for unsupported global encryption.
                     * 
                     */
                    std::string GetNoSupportGlobalEncryptionReasonCode() const;

                    /**
                     * 设置Status code for unsupported global encryption.
                     * @param _noSupportGlobalEncryptionReasonCode Status code for unsupported global encryption.
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
                     * Whether secondary AZ is supported
                     */
                    std::string m_isSupportSlaveZone;
                    bool m_isSupportSlaveZoneHasBeenSet;

                    /**
                     * The causes for no support from an availability zone.
                     */
                    std::string m_nonsupportSlaveZoneReason;
                    bool m_nonsupportSlaveZoneReasonHasBeenSet;

                    /**
                     * Whether read-only instance is supported
                     */
                    std::string m_isSupportRo;
                    bool m_isSupportRoHasBeenSet;

                    /**
                     * Reasons why RO instances are not supported.
                     */
                    std::string m_nonsupportRoReason;
                    bool m_nonsupportRoReasonHasBeenSet;

                    /**
                     * Whether manual snapshot backup initiation is supported.
                     */
                    std::string m_isSupportManualSnapshot;
                    bool m_isSupportManualSnapshotHasBeenSet;

                    /**
                     * Whether transparent data encryption is supported.
                     */
                    std::string m_isSupportTransparentDataEncryption;
                    bool m_isSupportTransparentDataEncryptionHasBeenSet;

                    /**
                     * Reasons for no support of transparent data encryption.
                     */
                    std::string m_noSupportTransparentDataEncryptionReason;
                    bool m_noSupportTransparentDataEncryptionReasonHasBeenSet;

                    /**
                     * Whether manual initiation of logical backup is supported.
                     */
                    std::string m_isSupportManualLogic;
                    bool m_isSupportManualLogicHasBeenSet;

                    /**
                     * Enable global encryption.
                     */
                    std::string m_isSupportGlobalEncryption;
                    bool m_isSupportGlobalEncryptionHasBeenSet;

                    /**
                     * The causes for unsupported global encryption.
                     */
                    std::string m_noSupportGlobalEncryptionReason;
                    bool m_noSupportGlobalEncryptionReasonHasBeenSet;

                    /**
                     * Status code for unsupported tde reason.
                     */
                    std::string m_noSupportTransparentDataEncryptionReasonCode;
                    bool m_noSupportTransparentDataEncryptionReasonCodeHasBeenSet;

                    /**
                     * Status code for unsupported global encryption.
                     */
                    std::string m_noSupportGlobalEncryptionReasonCode;
                    bool m_noSupportGlobalEncryptionReasonCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
