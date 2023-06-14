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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEREGISTRYTIMINGSCANTASKRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEREGISTRYTIMINGSCANTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageRegistryTimingScanTask response structure.
                */
                class DescribeImageRegistryTimingScanTaskResponse : public AbstractModel
                {
                public:
                    DescribeImageRegistryTimingScanTaskResponse();
                    ~DescribeImageRegistryTimingScanTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Scheduled scan switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enable Scheduled scan switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Scheduled scan time
                     * @return ScanTime Scheduled scan time
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取Scheduled scan interval
                     * @return ScanPeriod Scheduled scan interval
                     * 
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     * 
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取Array of scan types
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanType Array of scan types
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取Scan of all images
                     * @return All Scan of all images
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取Scan of specified images
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Images Scan of specified images
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取ID of the specified image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id ID of the specified image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Scheduled scan switch
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Scheduled scan time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Scheduled scan interval
                     */
                    uint64_t m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * Array of scan types
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * Scan of all images
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * Scan of specified images
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * ID of the specified image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEREGISTRYTIMINGSCANTASKRESPONSE_H_
