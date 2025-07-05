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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_OVERWRITEWHITEBOXDEVICEFINGERPRINTSREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_OVERWRITEWHITEBOXDEVICEFINGERPRINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/DeviceFingerprint.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * OverwriteWhiteBoxDeviceFingerprints request structure.
                */
                class OverwriteWhiteBoxDeviceFingerprintsRequest : public AbstractModel
                {
                public:
                    OverwriteWhiteBoxDeviceFingerprintsRequest();
                    ~OverwriteWhiteBoxDeviceFingerprintsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取White-box key ID
                     * @return KeyId White-box key ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置White-box key ID
                     * @param _keyId White-box key ID
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Device fingerprint list. If the list is empty, it means to delete all fingerprint information corresponding to the key. There can be up to 200 entries in the list.
                     * @return DeviceFingerprints Device fingerprint list. If the list is empty, it means to delete all fingerprint information corresponding to the key. There can be up to 200 entries in the list.
                     * 
                     */
                    std::vector<DeviceFingerprint> GetDeviceFingerprints() const;

                    /**
                     * 设置Device fingerprint list. If the list is empty, it means to delete all fingerprint information corresponding to the key. There can be up to 200 entries in the list.
                     * @param _deviceFingerprints Device fingerprint list. If the list is empty, it means to delete all fingerprint information corresponding to the key. There can be up to 200 entries in the list.
                     * 
                     */
                    void SetDeviceFingerprints(const std::vector<DeviceFingerprint>& _deviceFingerprints);

                    /**
                     * 判断参数 DeviceFingerprints 是否已赋值
                     * @return DeviceFingerprints 是否已赋值
                     * 
                     */
                    bool DeviceFingerprintsHasBeenSet() const;

                private:

                    /**
                     * White-box key ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Device fingerprint list. If the list is empty, it means to delete all fingerprint information corresponding to the key. There can be up to 200 entries in the list.
                     */
                    std::vector<DeviceFingerprint> m_deviceFingerprints;
                    bool m_deviceFingerprintsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_OVERWRITEWHITEBOXDEVICEFINGERPRINTSREQUEST_H_
