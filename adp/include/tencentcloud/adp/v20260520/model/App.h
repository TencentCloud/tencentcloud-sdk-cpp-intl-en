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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APP_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppAuxiliaryInfo.h>
#include <tencentcloud/adp/v20260520/model/AppConfig.h>
#include <tencentcloud/adp/v20260520/model/AppMetadata.h>
#include <tencentcloud/adp/v20260520/model/AppSecretInfo.h>
#include <tencentcloud/adp/v20260520/model/AppShareURLInfo.h>
#include <tencentcloud/adp/v20260520/model/AppStatusInfo.h>
#include <tencentcloud/adp/v20260520/model/CorpShareConfig.h>
#include <tencentcloud/adp/v20260520/model/AppSharedKbInfo.h>
#include <tencentcloud/adp/v20260520/model/PortalShareConfig.h>
#include <tencentcloud/adp/v20260520/model/FileVolumeMount.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Complete information of the application
                */
                class App : public AbstractModel
                {
                public:
                    App();
                    ~App() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Auxiliary information (sub-status/approval/appeal/search for resource/special status)</p>
                     * @return AuxiliaryInfo <p>Auxiliary information (sub-status/approval/appeal/search for resource/special status)</p>
                     * 
                     */
                    AppAuxiliaryInfo GetAuxiliaryInfo() const;

                    /**
                     * 设置<p>Auxiliary information (sub-status/approval/appeal/search for resource/special status)</p>
                     * @param _auxiliaryInfo <p>Auxiliary information (sub-status/approval/appeal/search for resource/special status)</p>
                     * 
                     */
                    void SetAuxiliaryInfo(const AppAuxiliaryInfo& _auxiliaryInfo);

                    /**
                     * 判断参数 AuxiliaryInfo 是否已赋值
                     * @return AuxiliaryInfo 是否已赋值
                     * 
                     */
                    bool AuxiliaryInfoHasBeenSet() const;

                    /**
                     * 获取<p>Configuration.</p>
                     * @return Config <p>Configuration.</p>
                     * 
                     */
                    AppConfig GetConfig() const;

                    /**
                     * 设置<p>Configuration.</p>
                     * @param _config <p>Configuration.</p>
                     * 
                     */
                    void SetConfig(const AppConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>Metadata</p>
                     * @return Metadata <p>Metadata</p>
                     * 
                     */
                    AppMetadata GetMetadata() const;

                    /**
                     * 设置<p>Metadata</p>
                     * @param _metadata <p>Metadata</p>
                     * 
                     */
                    void SetMetadata(const AppMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>Application key information</p>
                     * @return SecretInfo <p>Application key information</p>
                     * 
                     */
                    AppSecretInfo GetSecretInfo() const;

                    /**
                     * 设置<p>Application key information</p>
                     * @param _secretInfo <p>Application key information</p>
                     * 
                     */
                    void SetSecretInfo(const AppSecretInfo& _secretInfo);

                    /**
                     * 判断参数 SecretInfo 是否已赋值
                     * @return SecretInfo 是否已赋值
                     * 
                     */
                    bool SecretInfoHasBeenSet() const;

                    /**
                     * 获取<p>Sharing link information (including access control)</p>
                     * @return ShareUrlInfo <p>Sharing link information (including access control)</p>
                     * 
                     */
                    AppShareURLInfo GetShareUrlInfo() const;

                    /**
                     * 设置<p>Sharing link information (including access control)</p>
                     * @param _shareUrlInfo <p>Sharing link information (including access control)</p>
                     * 
                     */
                    void SetShareUrlInfo(const AppShareURLInfo& _shareUrlInfo);

                    /**
                     * 判断参数 ShareUrlInfo 是否已赋值
                     * @return ShareUrlInfo 是否已赋值
                     * 
                     */
                    bool ShareUrlInfoHasBeenSet() const;

                    /**
                     * 获取<p>Status.</p>
                     * @return Status <p>Status.</p>
                     * 
                     */
                    AppStatusInfo GetStatus() const;

                    /**
                     * 设置<p>Status.</p>
                     * @param _status <p>Status.</p>
                     * 
                     */
                    void SetStatus(const AppStatusInfo& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Business shared configuration</p>
                     * @return CorpShareConfig <p>Business shared configuration</p>
                     * 
                     */
                    CorpShareConfig GetCorpShareConfig() const;

                    /**
                     * 设置<p>Business shared configuration</p>
                     * @param _corpShareConfig <p>Business shared configuration</p>
                     * 
                     */
                    void SetCorpShareConfig(const CorpShareConfig& _corpShareConfig);

                    /**
                     * 判断参数 CorpShareConfig 是否已赋值
                     * @return CorpShareConfig 是否已赋值
                     * 
                     */
                    bool CorpShareConfigHasBeenSet() const;

                    /**
                     * 获取<p>List of shared knowledge bases referenced by the application</p>
                     * @return SharedKbList <p>List of shared knowledge bases referenced by the application</p>
                     * 
                     */
                    std::vector<AppSharedKbInfo> GetSharedKbList() const;

                    /**
                     * 设置<p>List of shared knowledge bases referenced by the application</p>
                     * @param _sharedKbList <p>List of shared knowledge bases referenced by the application</p>
                     * 
                     */
                    void SetSharedKbList(const std::vector<AppSharedKbInfo>& _sharedKbList);

                    /**
                     * 判断参数 SharedKbList 是否已赋值
                     * @return SharedKbList 是否已赋值
                     * 
                     */
                    bool SharedKbListHasBeenSet() const;

                    /**
                     * 获取<p>portal shared configuration</p>
                     * @return PortalShareConfig <p>portal shared configuration</p>
                     * 
                     */
                    PortalShareConfig GetPortalShareConfig() const;

                    /**
                     * 设置<p>portal shared configuration</p>
                     * @param _portalShareConfig <p>portal shared configuration</p>
                     * 
                     */
                    void SetPortalShareConfig(const PortalShareConfig& _portalShareConfig);

                    /**
                     * 判断参数 PortalShareConfig 是否已赋值
                     * @return PortalShareConfig 是否已赋值
                     * 
                     */
                    bool PortalShareConfigHasBeenSet() const;

                    /**
                     * 获取<p>Application-mounted cloud disk</p>
                     * @return FileVolumeMountList <p>Application-mounted cloud disk</p>
                     * 
                     */
                    std::vector<FileVolumeMount> GetFileVolumeMountList() const;

                    /**
                     * 设置<p>Application-mounted cloud disk</p>
                     * @param _fileVolumeMountList <p>Application-mounted cloud disk</p>
                     * 
                     */
                    void SetFileVolumeMountList(const std::vector<FileVolumeMount>& _fileVolumeMountList);

                    /**
                     * 判断参数 FileVolumeMountList 是否已赋值
                     * @return FileVolumeMountList 是否已赋值
                     * 
                     */
                    bool FileVolumeMountListHasBeenSet() const;

                private:

                    /**
                     * <p>Auxiliary information (sub-status/approval/appeal/search for resource/special status)</p>
                     */
                    AppAuxiliaryInfo m_auxiliaryInfo;
                    bool m_auxiliaryInfoHasBeenSet;

                    /**
                     * <p>Configuration.</p>
                     */
                    AppConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Metadata</p>
                     */
                    AppMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>Application key information</p>
                     */
                    AppSecretInfo m_secretInfo;
                    bool m_secretInfoHasBeenSet;

                    /**
                     * <p>Sharing link information (including access control)</p>
                     */
                    AppShareURLInfo m_shareUrlInfo;
                    bool m_shareUrlInfoHasBeenSet;

                    /**
                     * <p>Status.</p>
                     */
                    AppStatusInfo m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Business shared configuration</p>
                     */
                    CorpShareConfig m_corpShareConfig;
                    bool m_corpShareConfigHasBeenSet;

                    /**
                     * <p>List of shared knowledge bases referenced by the application</p>
                     */
                    std::vector<AppSharedKbInfo> m_sharedKbList;
                    bool m_sharedKbListHasBeenSet;

                    /**
                     * <p>portal shared configuration</p>
                     */
                    PortalShareConfig m_portalShareConfig;
                    bool m_portalShareConfigHasBeenSet;

                    /**
                     * <p>Application-mounted cloud disk</p>
                     */
                    std::vector<FileVolumeMount> m_fileVolumeMountList;
                    bool m_fileVolumeMountListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APP_H_
