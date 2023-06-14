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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTHORIZEDINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTHORIZEDINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeImageAuthorizedInfo response structure.
                */
                class DescribeImageAuthorizedInfoResponse : public AbstractModel
                {
                public:
                    DescribeImageAuthorizedInfoResponse();
                    ~DescribeImageAuthorizedInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of valid image licenses
                     * @return TotalAuthorizedCnt Total number of valid image licenses
                     * 
                     */
                    uint64_t GetTotalAuthorizedCnt() const;

                    /**
                     * 判断参数 TotalAuthorizedCnt 是否已赋值
                     * @return TotalAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool TotalAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取Number of used image licenses
                     * @return UsedAuthorizedCnt Number of used image licenses
                     * 
                     */
                    uint64_t GetUsedAuthorizedCnt() const;

                    /**
                     * 判断参数 UsedAuthorizedCnt 是否已赋值
                     * @return UsedAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool UsedAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取Number of images with scan enabled
                     * @return ScannedImageCnt Number of images with scan enabled
                     * 
                     */
                    uint64_t GetScannedImageCnt() const;

                    /**
                     * 判断参数 ScannedImageCnt 是否已赋值
                     * @return ScannedImageCnt 是否已赋值
                     * 
                     */
                    bool ScannedImageCntHasBeenSet() const;

                    /**
                     * 获取Number of images with scan not enabled
                     * @return NotScannedImageCnt Number of images with scan not enabled
                     * 
                     */
                    uint64_t GetNotScannedImageCnt() const;

                    /**
                     * 判断参数 NotScannedImageCnt 是否已赋值
                     * @return NotScannedImageCnt 是否已赋值
                     * 
                     */
                    bool NotScannedImageCntHasBeenSet() const;

                    /**
                     * 获取Number of local images with scan not enabled
                     * @return NotScannedLocalImageCnt Number of local images with scan not enabled
                     * 
                     */
                    uint64_t GetNotScannedLocalImageCnt() const;

                    /**
                     * 判断参数 NotScannedLocalImageCnt 是否已赋值
                     * @return NotScannedLocalImageCnt 是否已赋值
                     * 
                     */
                    bool NotScannedLocalImageCntHasBeenSet() const;

                private:

                    /**
                     * Total number of valid image licenses
                     */
                    uint64_t m_totalAuthorizedCnt;
                    bool m_totalAuthorizedCntHasBeenSet;

                    /**
                     * Number of used image licenses
                     */
                    uint64_t m_usedAuthorizedCnt;
                    bool m_usedAuthorizedCntHasBeenSet;

                    /**
                     * Number of images with scan enabled
                     */
                    uint64_t m_scannedImageCnt;
                    bool m_scannedImageCntHasBeenSet;

                    /**
                     * Number of images with scan not enabled
                     */
                    uint64_t m_notScannedImageCnt;
                    bool m_notScannedImageCntHasBeenSet;

                    /**
                     * Number of local images with scan not enabled
                     */
                    uint64_t m_notScannedLocalImageCnt;
                    bool m_notScannedLocalImageCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTHORIZEDINFORESPONSE_H_
