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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESBINDRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESBINDRULEINFO_H_

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
                * Information of the runtime rule bound to the image
                */
                class ImagesBindRuleInfo : public AbstractModel
                {
                public:
                    ImagesBindRuleInfo();
                    ~ImagesBindRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID
                     * @return ImageId Image ID
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param ImageId Image ID
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param ImageName Image name
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Number of associated containers
                     * @return ContainerCnt Number of associated containers
                     */
                    int64_t GetContainerCnt() const;

                    /**
                     * 设置Number of associated containers
                     * @param ContainerCnt Number of associated containers
                     */
                    void SetContainerCnt(const int64_t& _containerCnt);

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取Bound rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Bound rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Bound rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleId Bound rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleName Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleName Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Image size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageSize Image size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置Image size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ImageSize Image size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanTime Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ScanTime Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     */
                    bool ScanTimeHasBeenSet() const;

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Number of associated containers
                     */
                    int64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * Bound rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Image size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESBINDRULEINFO_H_
