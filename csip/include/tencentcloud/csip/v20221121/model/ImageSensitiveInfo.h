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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESENSITIVEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESENSITIVEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Sensitive information in the mirror
                */
                class ImageSensitiveInfo : public AbstractModel
                {
                public:
                    ImageSensitiveInfo();
                    ~ImageSensitiveInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sensitive information behavior types</p><p>Enumeration values:</p><ul><li>1: start up with root account</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
                     * @return Behavior <p>Sensitive information behavior types</p><p>Enumeration values:</p><ul><li>1: start up with root account</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
                     * 
                     */
                    uint64_t GetBehavior() const;

                    /**
                     * 设置<p>Sensitive information behavior types</p><p>Enumeration values:</p><ul><li>1: start up with root account</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
                     * @param _behavior <p>Sensitive information behavior types</p><p>Enumeration values:</p><ul><li>1: start up with root account</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
                     * 
                     */
                    void SetBehavior(const uint64_t& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     * 
                     */
                    bool BehaviorHasBeenSet() const;

                    /**
                     * 获取<p>Rule type.</p>
                     * @return Type <p>Rule type.</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>Rule type.</p>
                     * @param _type <p>Rule type.</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Risk level</p><p>Enumeration values:</p><ul><li>1: Low risk</li><li>2: Medium risk</li><li>3: High-risk</li><li>4: Severe risk</li></ul>
                     * @return Level <p>Risk level</p><p>Enumeration values:</p><ul><li>1: Low risk</li><li>2: Medium risk</li><li>3: High-risk</li><li>4: Severe risk</li></ul>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Risk level</p><p>Enumeration values:</p><ul><li>1: Low risk</li><li>2: Medium risk</li><li>3: High-risk</li><li>4: Severe risk</li></ul>
                     * @param _level <p>Risk level</p><p>Enumeration values:</p><ul><li>1: Low risk</li><li>2: Medium risk</li><li>3: High-risk</li><li>4: Severe risk</li></ul>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Risk description</p>
                     * @return Describe <p>Risk description</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>Risk description</p>
                     * @param _describe <p>Risk description</p>
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取<p>Risk content</p>
                     * @return InstructionContent <p>Risk content</p>
                     * 
                     */
                    std::string GetInstructionContent() const;

                    /**
                     * 设置<p>Risk content</p>
                     * @param _instructionContent <p>Risk content</p>
                     * 
                     */
                    void SetInstructionContent(const std::string& _instructionContent);

                    /**
                     * 判断参数 InstructionContent 是否已赋值
                     * @return InstructionContent 是否已赋值
                     * 
                     */
                    bool InstructionContentHasBeenSet() const;

                    /**
                     * 获取<p>Image ID.</p>
                     * @return ImageId <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageId <p>Image ID.</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>Associated account name</p>
                     * @return OwnerAccountName <p>Associated account name</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Associated account name</p>
                     * @param _ownerAccountName <p>Associated account name</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Associated account uin</p>
                     * @return OwnerUin <p>Associated account uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>Associated account uin</p>
                     * @param _ownerUin <p>Associated account uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>appid of the associated account</p>
                     * @return OwnerAppId <p>appid of the associated account</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the associated account</p>
                     * @param _ownerAppId <p>appid of the associated account</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Numbers of affected images</p>
                     * @return AffectImageCount <p>Numbers of affected images</p>
                     * 
                     */
                    uint64_t GetAffectImageCount() const;

                    /**
                     * 设置<p>Numbers of affected images</p>
                     * @param _affectImageCount <p>Numbers of affected images</p>
                     * 
                     */
                    void SetAffectImageCount(const uint64_t& _affectImageCount);

                    /**
                     * 判断参数 AffectImageCount 是否已赋值
                     * @return AffectImageCount 是否已赋值
                     * 
                     */
                    bool AffectImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Image layer Id</p>
                     * @return LayerId <p>Image layer Id</p>
                     * 
                     */
                    std::string GetLayerId() const;

                    /**
                     * 设置<p>Image layer Id</p>
                     * @param _layerId <p>Image layer Id</p>
                     * 
                     */
                    void SetLayerId(const std::string& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

                    /**
                     * 获取<p>Image Id</p>
                     * @return Id <p>Image Id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Image Id</p>
                     * @param _id <p>Image Id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return FirstFoundTime <p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetFirstFoundTime() const;

                    /**
                     * 设置<p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _firstFoundTime <p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetFirstFoundTime(const std::string& _firstFoundTime);

                    /**
                     * 判断参数 FirstFoundTime 是否已赋值
                     * @return FirstFoundTime 是否已赋值
                     * 
                     */
                    bool FirstFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>Most recent discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestFoundTime <p>Most recent discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置<p>Most recent discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestFoundTime <p>Most recent discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>Image layer serial number</p>
                     * @return LayerIndex <p>Image layer serial number</p>
                     * 
                     */
                    uint64_t GetLayerIndex() const;

                    /**
                     * 设置<p>Image layer serial number</p>
                     * @param _layerIndex <p>Image layer serial number</p>
                     * 
                     */
                    void SetLayerIndex(const uint64_t& _layerIndex);

                    /**
                     * 判断参数 LayerIndex 是否已赋值
                     * @return LayerIndex 是否已赋值
                     * 
                     */
                    bool LayerIndexHasBeenSet() const;

                private:

                    /**
                     * <p>Sensitive information behavior types</p><p>Enumeration values:</p><ul><li>1: start up with root account</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
                     */
                    uint64_t m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * <p>Rule type.</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Risk level</p><p>Enumeration values:</p><ul><li>1: Low risk</li><li>2: Medium risk</li><li>3: High-risk</li><li>4: Severe risk</li></ul>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Risk description</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>Risk content</p>
                     */
                    std::string m_instructionContent;
                    bool m_instructionContentHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Associated account name</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>Associated account uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>appid of the associated account</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Numbers of affected images</p>
                     */
                    uint64_t m_affectImageCount;
                    bool m_affectImageCountHasBeenSet;

                    /**
                     * <p>Image layer Id</p>
                     */
                    std::string m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * <p>Image Id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_firstFoundTime;
                    bool m_firstFoundTimeHasBeenSet;

                    /**
                     * <p>Most recent discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * <p>Image layer serial number</p>
                     */
                    uint64_t m_layerIndex;
                    bool m_layerIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESENSITIVEINFO_H_
