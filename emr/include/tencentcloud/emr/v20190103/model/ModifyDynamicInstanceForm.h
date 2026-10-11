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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYDYNAMICINSTANCEFORM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYDYNAMICINSTANCEFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DynamicInstanceGroup.h>
#include <tencentcloud/emr/v20190103/model/CBSVolume.h>
#include <tencentcloud/emr/v20190103/model/CFSVolume.h>
#include <tencentcloud/emr/v20190103/model/COSVolume.h>
#include <tencentcloud/emr/v20190103/model/VolumeMount.h>
#include <tencentcloud/emr/v20190103/model/TkeLabel.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/NameValue.h>
#include <tencentcloud/emr/v20190103/model/DependService.h>
#include <tencentcloud/emr/v20190103/model/CFSTurboVolume.h>
#include <tencentcloud/emr/v20190103/model/CustomImage.h>
#include <tencentcloud/emr/v20190103/model/ImageInfoV2.h>
#include <tencentcloud/emr/v20190103/model/GooseFSVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Form data submitted when updating a DynamicInstance.
                */
                class ModifyDynamicInstanceForm : public AbstractModel
                {
                public:
                    ModifyDynamicInstanceForm();
                    ~ModifyDynamicInstanceForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Update scope:<br>1: Add a worker group (DynamicInstance level)<br>2: Update storage configuration (DynamicInstance level)<br>3: Update tag configuration (DynamicInstance level)<br>4: Update advanced configuration (DynamicInstance level)<br>5: Update PodCpu and PodMem (DynamicInstance-group level)<br>6: Update PodNum, MinPodNum, and MaxPodNum (DynamicInstance-group level)<br>7: Update storage configuration (DynamicInstance-group level)<br>8: Update tag configuration (DynamicInstance-group level)</p>
                     * @return ModifyScope <p>Update scope:<br>1: Add a worker group (DynamicInstance level)<br>2: Update storage configuration (DynamicInstance level)<br>3: Update tag configuration (DynamicInstance level)<br>4: Update advanced configuration (DynamicInstance level)<br>5: Update PodCpu and PodMem (DynamicInstance-group level)<br>6: Update PodNum, MinPodNum, and MaxPodNum (DynamicInstance-group level)<br>7: Update storage configuration (DynamicInstance-group level)<br>8: Update tag configuration (DynamicInstance-group level)</p>
                     * 
                     */
                    int64_t GetModifyScope() const;

                    /**
                     * 设置<p>Update scope:<br>1: Add a worker group (DynamicInstance level)<br>2: Update storage configuration (DynamicInstance level)<br>3: Update tag configuration (DynamicInstance level)<br>4: Update advanced configuration (DynamicInstance level)<br>5: Update PodCpu and PodMem (DynamicInstance-group level)<br>6: Update PodNum, MinPodNum, and MaxPodNum (DynamicInstance-group level)<br>7: Update storage configuration (DynamicInstance-group level)<br>8: Update tag configuration (DynamicInstance-group level)</p>
                     * @param _modifyScope <p>Update scope:<br>1: Add a worker group (DynamicInstance level)<br>2: Update storage configuration (DynamicInstance level)<br>3: Update tag configuration (DynamicInstance level)<br>4: Update advanced configuration (DynamicInstance level)<br>5: Update PodCpu and PodMem (DynamicInstance-group level)<br>6: Update PodNum, MinPodNum, and MaxPodNum (DynamicInstance-group level)<br>7: Update storage configuration (DynamicInstance-group level)<br>8: Update tag configuration (DynamicInstance-group level)</p>
                     * 
                     */
                    void SetModifyScope(const int64_t& _modifyScope);

                    /**
                     * 判断参数 ModifyScope 是否已赋值
                     * @return ModifyScope 是否已赋值
                     * 
                     */
                    bool ModifyScopeHasBeenSet() const;

                    /**
                     * 获取<p>Added worker group information.</p>
                     * @return AddDynamicInstanceGroup <p>Added worker group information.</p>
                     * 
                     */
                    DynamicInstanceGroup GetAddDynamicInstanceGroup() const;

                    /**
                     * 设置<p>Added worker group information.</p>
                     * @param _addDynamicInstanceGroup <p>Added worker group information.</p>
                     * 
                     */
                    void SetAddDynamicInstanceGroup(const DynamicInstanceGroup& _addDynamicInstanceGroup);

                    /**
                     * 判断参数 AddDynamicInstanceGroup 是否已赋值
                     * @return AddDynamicInstanceGroup 是否已赋值
                     * 
                     */
                    bool AddDynamicInstanceGroupHasBeenSet() const;

                    /**
                     * 获取<p>Whether to support storage configuration.</p>
                     * @return SupportPV <p>Whether to support storage configuration.</p>
                     * 
                     */
                    bool GetSupportPV() const;

                    /**
                     * 设置<p>Whether to support storage configuration.</p>
                     * @param _supportPV <p>Whether to support storage configuration.</p>
                     * 
                     */
                    void SetSupportPV(const bool& _supportPV);

                    /**
                     * 判断参数 SupportPV 是否已赋值
                     * @return SupportPV 是否已赋值
                     * 
                     */
                    bool SupportPVHasBeenSet() const;

                    /**
                     * 获取<p>CBS storage volume list.</p>
                     * @return CBSVolumes <p>CBS storage volume list.</p>
                     * 
                     */
                    std::vector<CBSVolume> GetCBSVolumes() const;

                    /**
                     * 设置<p>CBS storage volume list.</p>
                     * @param _cBSVolumes <p>CBS storage volume list.</p>
                     * 
                     */
                    void SetCBSVolumes(const std::vector<CBSVolume>& _cBSVolumes);

                    /**
                     * 判断参数 CBSVolumes 是否已赋值
                     * @return CBSVolumes 是否已赋值
                     * 
                     */
                    bool CBSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>CFS storage volume list, excluding the CFS Turbo list.</p>
                     * @return CFSVolumes <p>CFS storage volume list, excluding the CFS Turbo list.</p>
                     * 
                     */
                    std::vector<CFSVolume> GetCFSVolumes() const;

                    /**
                     * 设置<p>CFS storage volume list, excluding the CFS Turbo list.</p>
                     * @param _cFSVolumes <p>CFS storage volume list, excluding the CFS Turbo list.</p>
                     * 
                     */
                    void SetCFSVolumes(const std::vector<CFSVolume>& _cFSVolumes);

                    /**
                     * 判断参数 CFSVolumes 是否已赋值
                     * @return CFSVolumes 是否已赋值
                     * 
                     */
                    bool CFSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>COS storage volume list.</p>
                     * @return COSVolumes <p>COS storage volume list.</p>
                     * 
                     */
                    std::vector<COSVolume> GetCOSVolumes() const;

                    /**
                     * 设置<p>COS storage volume list.</p>
                     * @param _cOSVolumes <p>COS storage volume list.</p>
                     * 
                     */
                    void SetCOSVolumes(const std::vector<COSVolume>& _cOSVolumes);

                    /**
                     * 判断参数 COSVolumes 是否已赋值
                     * @return COSVolumes 是否已赋值
                     * 
                     */
                    bool COSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>Mount volume list.</p>
                     * @return VolumeMounts <p>Mount volume list.</p>
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置<p>Mount volume list.</p>
                     * @param _volumeMounts <p>Mount volume list.</p>
                     * 
                     */
                    void SetVolumeMounts(const std::vector<VolumeMount>& _volumeMounts);

                    /**
                     * 判断参数 VolumeMounts 是否已赋值
                     * @return VolumeMounts 是否已赋值
                     * 
                     */
                    bool VolumeMountsHasBeenSet() const;

                    /**
                     * 获取<p>Pod label.</p>
                     * @return Labels <p>Pod label.</p>
                     * 
                     */
                    std::vector<TkeLabel> GetLabels() const;

                    /**
                     * 设置<p>Pod label.</p>
                     * @param _labels <p>Pod label.</p>
                     * 
                     */
                    void SetLabels(const std::vector<TkeLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Tolerations definition.</p>
                     * @return Tolerations <p>Tolerations definition.</p>
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置<p>Tolerations definition.</p>
                     * @param _tolerations <p>Tolerations definition.</p>
                     * 
                     */
                    void SetTolerations(const std::vector<Toleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取<p>Environment variable.</p>
                     * @return Envs <p>Environment variable.</p>
                     * 
                     */
                    std::vector<NameValue> GetEnvs() const;

                    /**
                     * 设置<p>Environment variable.</p>
                     * @param _envs <p>Environment variable.</p>
                     * 
                     */
                    void SetEnvs(const std::vector<NameValue>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取<p>Dependent external components.</p>
                     * @return DependServices <p>Dependent external components.</p>
                     * 
                     */
                    std::vector<DependService> GetDependServices() const;

                    /**
                     * 设置<p>Dependent external components.</p>
                     * @param _dependServices <p>Dependent external components.</p>
                     * 
                     */
                    void SetDependServices(const std::vector<DependService>& _dependServices);

                    /**
                     * 判断参数 DependServices 是否已赋值
                     * @return DependServices 是否已赋值
                     * 
                     */
                    bool DependServicesHasBeenSet() const;

                    /**
                     * 获取<p>Whether to generate a new token for authentication.</p>
                     * @return SupportNewToken <p>Whether to generate a new token for authentication.</p>
                     * 
                     */
                    bool GetSupportNewToken() const;

                    /**
                     * 设置<p>Whether to generate a new token for authentication.</p>
                     * @param _supportNewToken <p>Whether to generate a new token for authentication.</p>
                     * 
                     */
                    void SetSupportNewToken(const bool& _supportNewToken);

                    /**
                     * 判断参数 SupportNewToken 是否已赋值
                     * @return SupportNewToken 是否已赋值
                     * 
                     */
                    bool SupportNewTokenHasBeenSet() const;

                    /**
                     * 获取<p>Update information at the DynamicInstance-group level.</p>
                     * @return ModifyDynamicInstanceGroup <p>Update information at the DynamicInstance-group level.</p>
                     * 
                     */
                    DynamicInstanceGroup GetModifyDynamicInstanceGroup() const;

                    /**
                     * 设置<p>Update information at the DynamicInstance-group level.</p>
                     * @param _modifyDynamicInstanceGroup <p>Update information at the DynamicInstance-group level.</p>
                     * 
                     */
                    void SetModifyDynamicInstanceGroup(const DynamicInstanceGroup& _modifyDynamicInstanceGroup);

                    /**
                     * 判断参数 ModifyDynamicInstanceGroup 是否已赋值
                     * @return ModifyDynamicInstanceGroup 是否已赋值
                     * 
                     */
                    bool ModifyDynamicInstanceGroupHasBeenSet() const;

                    /**
                     * 获取<p>CFS Turbo mount list, excluding the standard edition.</p>
                     * @return CFSTurboVolumes <p>CFS Turbo mount list, excluding the standard edition.</p>
                     * 
                     */
                    std::vector<CFSTurboVolume> GetCFSTurboVolumes() const;

                    /**
                     * 设置<p>CFS Turbo mount list, excluding the standard edition.</p>
                     * @param _cFSTurboVolumes <p>CFS Turbo mount list, excluding the standard edition.</p>
                     * 
                     */
                    void SetCFSTurboVolumes(const std::vector<CFSTurboVolume>& _cFSTurboVolumes);

                    /**
                     * 判断参数 CFSTurboVolumes 是否已赋值
                     * @return CFSTurboVolumes 是否已赋值
                     * 
                     */
                    bool CFSTurboVolumesHasBeenSet() const;

                    /**
                     * 获取<p>Custom image.</p>
                     * @return CustomImage <p>Custom image.</p>
                     * 
                     */
                    CustomImage GetCustomImage() const;

                    /**
                     * 设置<p>Custom image.</p>
                     * @param _customImage <p>Custom image.</p>
                     * 
                     */
                    void SetCustomImage(const CustomImage& _customImage);

                    /**
                     * 判断参数 CustomImage 是否已赋值
                     * @return CustomImage 是否已赋值
                     * 
                     */
                    bool CustomImageHasBeenSet() const;

                    /**
                     * 获取<p>Custom image.</p>
                     * @return ImageInfoV2 <p>Custom image.</p>
                     * 
                     */
                    ImageInfoV2 GetImageInfoV2() const;

                    /**
                     * 设置<p>Custom image.</p>
                     * @param _imageInfoV2 <p>Custom image.</p>
                     * 
                     */
                    void SetImageInfoV2(const ImageInfoV2& _imageInfoV2);

                    /**
                     * 判断参数 ImageInfoV2 是否已赋值
                     * @return ImageInfoV2 是否已赋值
                     * 
                     */
                    bool ImageInfoV2HasBeenSet() const;

                    /**
                     * 获取<p>GooseFS disk.</p>
                     * @return GooseFSVolumes <p>GooseFS disk.</p>
                     * 
                     */
                    std::vector<GooseFSVolume> GetGooseFSVolumes() const;

                    /**
                     * 设置<p>GooseFS disk.</p>
                     * @param _gooseFSVolumes <p>GooseFS disk.</p>
                     * 
                     */
                    void SetGooseFSVolumes(const std::vector<GooseFSVolume>& _gooseFSVolumes);

                    /**
                     * 判断参数 GooseFSVolumes 是否已赋值
                     * @return GooseFSVolumes 是否已赋值
                     * 
                     */
                    bool GooseFSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable log collection.</p>
                     * @return EnableHistoryServer <p>Whether to enable log collection.</p>
                     * 
                     */
                    bool GetEnableHistoryServer() const;

                    /**
                     * 设置<p>Whether to enable log collection.</p>
                     * @param _enableHistoryServer <p>Whether to enable log collection.</p>
                     * 
                     */
                    void SetEnableHistoryServer(const bool& _enableHistoryServer);

                    /**
                     * 判断参数 EnableHistoryServer 是否已赋值
                     * @return EnableHistoryServer 是否已赋值
                     * 
                     */
                    bool EnableHistoryServerHasBeenSet() const;

                private:

                    /**
                     * <p>Update scope:<br>1: Add a worker group (DynamicInstance level)<br>2: Update storage configuration (DynamicInstance level)<br>3: Update tag configuration (DynamicInstance level)<br>4: Update advanced configuration (DynamicInstance level)<br>5: Update PodCpu and PodMem (DynamicInstance-group level)<br>6: Update PodNum, MinPodNum, and MaxPodNum (DynamicInstance-group level)<br>7: Update storage configuration (DynamicInstance-group level)<br>8: Update tag configuration (DynamicInstance-group level)</p>
                     */
                    int64_t m_modifyScope;
                    bool m_modifyScopeHasBeenSet;

                    /**
                     * <p>Added worker group information.</p>
                     */
                    DynamicInstanceGroup m_addDynamicInstanceGroup;
                    bool m_addDynamicInstanceGroupHasBeenSet;

                    /**
                     * <p>Whether to support storage configuration.</p>
                     */
                    bool m_supportPV;
                    bool m_supportPVHasBeenSet;

                    /**
                     * <p>CBS storage volume list.</p>
                     */
                    std::vector<CBSVolume> m_cBSVolumes;
                    bool m_cBSVolumesHasBeenSet;

                    /**
                     * <p>CFS storage volume list, excluding the CFS Turbo list.</p>
                     */
                    std::vector<CFSVolume> m_cFSVolumes;
                    bool m_cFSVolumesHasBeenSet;

                    /**
                     * <p>COS storage volume list.</p>
                     */
                    std::vector<COSVolume> m_cOSVolumes;
                    bool m_cOSVolumesHasBeenSet;

                    /**
                     * <p>Mount volume list.</p>
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * <p>Pod label.</p>
                     */
                    std::vector<TkeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Tolerations definition.</p>
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>Environment variable.</p>
                     */
                    std::vector<NameValue> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * <p>Dependent external components.</p>
                     */
                    std::vector<DependService> m_dependServices;
                    bool m_dependServicesHasBeenSet;

                    /**
                     * <p>Whether to generate a new token for authentication.</p>
                     */
                    bool m_supportNewToken;
                    bool m_supportNewTokenHasBeenSet;

                    /**
                     * <p>Update information at the DynamicInstance-group level.</p>
                     */
                    DynamicInstanceGroup m_modifyDynamicInstanceGroup;
                    bool m_modifyDynamicInstanceGroupHasBeenSet;

                    /**
                     * <p>CFS Turbo mount list, excluding the standard edition.</p>
                     */
                    std::vector<CFSTurboVolume> m_cFSTurboVolumes;
                    bool m_cFSTurboVolumesHasBeenSet;

                    /**
                     * <p>Custom image.</p>
                     */
                    CustomImage m_customImage;
                    bool m_customImageHasBeenSet;

                    /**
                     * <p>Custom image.</p>
                     */
                    ImageInfoV2 m_imageInfoV2;
                    bool m_imageInfoV2HasBeenSet;

                    /**
                     * <p>GooseFS disk.</p>
                     */
                    std::vector<GooseFSVolume> m_gooseFSVolumes;
                    bool m_gooseFSVolumesHasBeenSet;

                    /**
                     * <p>Whether to enable log collection.</p>
                     */
                    bool m_enableHistoryServer;
                    bool m_enableHistoryServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYDYNAMICINSTANCEFORM_H_
