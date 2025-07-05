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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GPUARGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GPUARGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/DriverVersion.h>
#include <tencentcloud/tke/v20180525/model/CUDNN.h>
#include <tencentcloud/tke/v20180525/model/CustomDriver.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GPU parameters, including GPU driver version, CDUA version, cuDNN version and whether to enable MIG.
                */
                class GPUArgs : public AbstractModel
                {
                public:
                    GPUArgs();
                    ~GPUArgs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable MIG
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return MIGEnable Whether to enable MIG
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetMIGEnable() const;

                    /**
                     * 设置Whether to enable MIG
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _mIGEnable Whether to enable MIG
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMIGEnable(const bool& _mIGEnable);

                    /**
                     * 判断参数 MIGEnable 是否已赋值
                     * @return MIGEnable 是否已赋值
                     * 
                     */
                    bool MIGEnableHasBeenSet() const;

                    /**
                     * 获取GPU driver version
                     * @return Driver GPU driver version
                     * 
                     */
                    DriverVersion GetDriver() const;

                    /**
                     * 设置GPU driver version
                     * @param _driver GPU driver version
                     * 
                     */
                    void SetDriver(const DriverVersion& _driver);

                    /**
                     * 判断参数 Driver 是否已赋值
                     * @return Driver 是否已赋值
                     * 
                     */
                    bool DriverHasBeenSet() const;

                    /**
                     * 获取CUDA version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CUDA CUDA version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    DriverVersion GetCUDA() const;

                    /**
                     * 设置CUDA version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _cUDA CUDA version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCUDA(const DriverVersion& _cUDA);

                    /**
                     * 判断参数 CUDA 是否已赋值
                     * @return CUDA 是否已赋值
                     * 
                     */
                    bool CUDAHasBeenSet() const;

                    /**
                     * 获取cuDNN version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CUDNN cuDNN version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    CUDNN GetCUDNN() const;

                    /**
                     * 设置cuDNN version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _cUDNN cuDNN version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCUDNN(const CUDNN& _cUDNN);

                    /**
                     * 判断参数 CUDNN 是否已赋值
                     * @return CUDNN 是否已赋值
                     * 
                     */
                    bool CUDNNHasBeenSet() const;

                    /**
                     * 获取Custom GPU driver
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CustomDriver Custom GPU driver
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    CustomDriver GetCustomDriver() const;

                    /**
                     * 设置Custom GPU driver
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _customDriver Custom GPU driver
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomDriver(const CustomDriver& _customDriver);

                    /**
                     * 判断参数 CustomDriver 是否已赋值
                     * @return CustomDriver 是否已赋值
                     * 
                     */
                    bool CustomDriverHasBeenSet() const;

                private:

                    /**
                     * Whether to enable MIG
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_mIGEnable;
                    bool m_mIGEnableHasBeenSet;

                    /**
                     * GPU driver version
                     */
                    DriverVersion m_driver;
                    bool m_driverHasBeenSet;

                    /**
                     * CUDA version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    DriverVersion m_cUDA;
                    bool m_cUDAHasBeenSet;

                    /**
                     * cuDNN version
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    CUDNN m_cUDNN;
                    bool m_cUDNNHasBeenSet;

                    /**
                     * Custom GPU driver
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    CustomDriver m_customDriver;
                    bool m_customDriverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GPUARGS_H_
