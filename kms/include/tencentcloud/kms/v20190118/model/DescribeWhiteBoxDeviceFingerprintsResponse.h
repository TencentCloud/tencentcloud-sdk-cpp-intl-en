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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXDEVICEFINGERPRINTSRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXDEVICEFINGERPRINTSRESPONSE_H_

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
                * DescribeWhiteBoxDeviceFingerprints response structure.
                */
                class DescribeWhiteBoxDeviceFingerprintsResponse : public AbstractModel
                {
                public:
                    DescribeWhiteBoxDeviceFingerprintsResponse();
                    ~DescribeWhiteBoxDeviceFingerprintsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Device fingerprint list
                     * @return DeviceFingerprints Device fingerprint list
                     * 
                     */
                    std::vector<DeviceFingerprint> GetDeviceFingerprints() const;

                    /**
                     * 判断参数 DeviceFingerprints 是否已赋值
                     * @return DeviceFingerprints 是否已赋值
                     * 
                     */
                    bool DeviceFingerprintsHasBeenSet() const;

                private:

                    /**
                     * Device fingerprint list
                     */
                    std::vector<DeviceFingerprint> m_deviceFingerprints;
                    bool m_deviceFingerprintsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXDEVICEFINGERPRINTSRESPONSE_H_
