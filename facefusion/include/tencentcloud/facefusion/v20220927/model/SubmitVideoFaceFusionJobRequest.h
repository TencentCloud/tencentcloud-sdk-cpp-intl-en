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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_SUBMITVIDEOFACEFUSIONJOBREQUEST_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_SUBMITVIDEOFACEFUSIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/MergeInfo.h>
#include <tencentcloud/facefusion/v20220927/model/LogoParam.h>
#include <tencentcloud/facefusion/v20220927/model/MetaData.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * SubmitVideoFaceFusionJob request structure.
                */
                class SubmitVideoFaceFusionJobRequest : public AbstractModel
                {
                public:
                    SubmitVideoFaceFusionJobRequest();
                    ~SubmitVideoFaceFusionJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Activity ID. Check it in the video face fusion console.
                     * @return ProjectId Activity ID. Check it in the video face fusion console.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Activity ID. Check it in the video face fusion console.
                     * @param _projectId Activity ID. Check it in the video face fusion console.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Material ID. Check it in the video face fusion console.
                     * @return ModelId Material ID. Check it in the video face fusion console.
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置Material ID. Check it in the video face fusion console.
                     * @param _modelId Material ID. Check it in the video face fusion console.
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取Face position information on the user face image and material template image. Only one entry is allowed.
                     * @return MergeInfos Face position information on the user face image and material template image. Only one entry is allowed.
                     * 
                     */
                    std::vector<MergeInfo> GetMergeInfos() const;

                    /**
                     * 设置Face position information on the user face image and material template image. Only one entry is allowed.
                     * @param _mergeInfos Face position information on the user face image and material template image. Only one entry is allowed.
                     * 
                     */
                    void SetMergeInfos(const std::vector<MergeInfo>& _mergeInfos);

                    /**
                     * 判断参数 MergeInfos 是否已赋值
                     * @return MergeInfos 是否已赋值
                     * 
                     */
                    bool MergeInfosHasBeenSet() const;

                    /**
                     * 获取0: inappropriate content recognition not required; 1: inappropriate content recognition required. Default value: 0.
Note: Once the inappropriate content recognition service is enabled, you need to decide whether to adjust your business logic based on the returned results. For example, you need to replace the image if the system informs you that the image does not meet the requirements.
**<font color=#1E90FF>Note: This field will be deprecated later due to business adjustments. It is not recommended for use.</font>**
                     * @return CelebrityIdentify 0: inappropriate content recognition not required; 1: inappropriate content recognition required. Default value: 0.
Note: Once the inappropriate content recognition service is enabled, you need to decide whether to adjust your business logic based on the returned results. For example, you need to replace the image if the system informs you that the image does not meet the requirements.
**<font color=#1E90FF>Note: This field will be deprecated later due to business adjustments. It is not recommended for use.</font>**
                     * 
                     */
                    int64_t GetCelebrityIdentify() const;

                    /**
                     * 设置0: inappropriate content recognition not required; 1: inappropriate content recognition required. Default value: 0.
Note: Once the inappropriate content recognition service is enabled, you need to decide whether to adjust your business logic based on the returned results. For example, you need to replace the image if the system informs you that the image does not meet the requirements.
**<font color=#1E90FF>Note: This field will be deprecated later due to business adjustments. It is not recommended for use.</font>**
                     * @param _celebrityIdentify 0: inappropriate content recognition not required; 1: inappropriate content recognition required. Default value: 0.
Note: Once the inappropriate content recognition service is enabled, you need to decide whether to adjust your business logic based on the returned results. For example, you need to replace the image if the system informs you that the image does not meet the requirements.
**<font color=#1E90FF>Note: This field will be deprecated later due to business adjustments. It is not recommended for use.</font>**
                     * 
                     */
                    void SetCelebrityIdentify(const int64_t& _celebrityIdentify);

                    /**
                     * 判断参数 CelebrityIdentify 是否已赋值
                     * @return CelebrityIdentify 是否已赋值
                     * 
                     */
                    bool CelebrityIdentifyHasBeenSet() const;

                    /**
                     * 获取Video watermark logo parameter
                     * @return LogoParam Video watermark logo parameter
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置Video watermark logo parameter
                     * @param _logoParam Video watermark logo parameter
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                    /**
                     * 获取COS pre-signed URL (PUT method). If this parameter is specified, the video after fusion will be uploaded to this URL.
**<font color=#1E90FF>Note: If upload to this URL fails, the video will be uploaded to the default address of Tencent Cloud.</font>**
                     * @return UserDesignatedUrl COS pre-signed URL (PUT method). If this parameter is specified, the video after fusion will be uploaded to this URL.
**<font color=#1E90FF>Note: If upload to this URL fails, the video will be uploaded to the default address of Tencent Cloud.</font>**
                     * 
                     */
                    std::string GetUserDesignatedUrl() const;

                    /**
                     * 设置COS pre-signed URL (PUT method). If this parameter is specified, the video after fusion will be uploaded to this URL.
**<font color=#1E90FF>Note: If upload to this URL fails, the video will be uploaded to the default address of Tencent Cloud.</font>**
                     * @param _userDesignatedUrl COS pre-signed URL (PUT method). If this parameter is specified, the video after fusion will be uploaded to this URL.
**<font color=#1E90FF>Note: If upload to this URL fails, the video will be uploaded to the default address of Tencent Cloud.</font>**
                     * 
                     */
                    void SetUserDesignatedUrl(const std::string& _userDesignatedUrl);

                    /**
                     * 判断参数 UserDesignatedUrl 是否已赋值
                     * @return UserDesignatedUrl 是否已赋值
                     * 
                     */
                    bool UserDesignatedUrlHasBeenSet() const;

                    /**
                     * 获取User IP address
                     * @return UserIp User IP address
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置User IP address
                     * @param _userIp User IP address
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取Video metadata field
                     * @return MetaData Video metadata field
                     * 
                     */
                    std::vector<MetaData> GetMetaData() const;

                    /**
                     * 设置Video metadata field
                     * @param _metaData Video metadata field
                     * 
                     */
                    void SetMetaData(const std::vector<MetaData>& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * Activity ID. Check it in the video face fusion console.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Material ID. Check it in the video face fusion console.
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * Face position information on the user face image and material template image. Only one entry is allowed.
                     */
                    std::vector<MergeInfo> m_mergeInfos;
                    bool m_mergeInfosHasBeenSet;

                    /**
                     * 0: inappropriate content recognition not required; 1: inappropriate content recognition required. Default value: 0.
Note: Once the inappropriate content recognition service is enabled, you need to decide whether to adjust your business logic based on the returned results. For example, you need to replace the image if the system informs you that the image does not meet the requirements.
**<font color=#1E90FF>Note: This field will be deprecated later due to business adjustments. It is not recommended for use.</font>**
                     */
                    int64_t m_celebrityIdentify;
                    bool m_celebrityIdentifyHasBeenSet;

                    /**
                     * Video watermark logo parameter
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * COS pre-signed URL (PUT method). If this parameter is specified, the video after fusion will be uploaded to this URL.
**<font color=#1E90FF>Note: If upload to this URL fails, the video will be uploaded to the default address of Tencent Cloud.</font>**
                     */
                    std::string m_userDesignatedUrl;
                    bool m_userDesignatedUrlHasBeenSet;

                    /**
                     * User IP address
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * Video metadata field
                     */
                    std::vector<MetaData> m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_SUBMITVIDEOFACEFUSIONJOBREQUEST_H_
