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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DATACONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DATACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/DataSetConfig.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/CFSConfig.h>
#include <tencentcloud/tione/v20211111/model/HDFSConfig.h>
#include <tencentcloud/tione/v20211111/model/GooseFS.h>
#include <tencentcloud/tione/v20211111/model/CFSTurbo.h>
#include <tencentcloud/tione/v20211111/model/LocalDisk.h>
#include <tencentcloud/tione/v20211111/model/CBSConfig.h>
#include <tencentcloud/tione/v20211111/model/HostPath.h>
#include <tencentcloud/tione/v20211111/model/PublicDataSourceFS.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Data configuration.
                */
                class DataConfig : public AbstractModel
                {
                public:
                    DataConfig();
                    ~DataConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mapping path.
                     * @return MappingPath Mapping path.
                     * 
                     */
                    std::string GetMappingPath() const;

                    /**
                     * 设置Mapping path.
                     * @param _mappingPath Mapping path.
                     * 
                     */
                    void SetMappingPath(const std::string& _mappingPath);

                    /**
                     * 判断参数 MappingPath 是否已赋值
                     * @return MappingPath 是否已赋值
                     * 
                     */
                    bool MappingPathHasBeenSet() const;

                    /**
                     * 获取Storage purpose.
Valid values: BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, and OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataSourceUsage Storage purpose.
Valid values: BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, and OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataSourceUsage() const;

                    /**
                     * 设置Storage purpose.
Valid values: BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, and OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataSourceUsage Storage purpose.
Valid values: BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, and OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataSourceUsage(const std::string& _dataSourceUsage);

                    /**
                     * 判断参数 DataSourceUsage 是否已赋值
                     * @return DataSourceUsage 是否已赋值
                     * 
                     */
                    bool DataSourceUsageHasBeenSet() const;

                    /**
                     * 获取DATASET, COS, CFS, CFSTurbo, GooseFSx, HDFS, and WEDATA_HDFS
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataSourceType DATASET, COS, CFS, CFSTurbo, GooseFSx, HDFS, and WEDATA_HDFS
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置DATASET, COS, CFS, CFSTurbo, GooseFSx, HDFS, and WEDATA_HDFS
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataSourceType DATASET, COS, CFS, CFSTurbo, GooseFSx, HDFS, and WEDATA_HDFS
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取Data from the data set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataSetSource Data from the data set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DataSetConfig GetDataSetSource() const;

                    /**
                     * 设置Data from the data set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataSetSource Data from the data set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataSetSource(const DataSetConfig& _dataSetSource);

                    /**
                     * 判断参数 DataSetSource 是否已赋值
                     * @return DataSetSource 是否已赋值
                     * 
                     */
                    bool DataSetSourceHasBeenSet() const;

                    /**
                     * 获取Data from COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return COSSource Data from COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CosPathInfo GetCOSSource() const;

                    /**
                     * 设置Data from COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cOSSource Data from COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCOSSource(const CosPathInfo& _cOSSource);

                    /**
                     * 判断参数 COSSource 是否已赋值
                     * @return COSSource 是否已赋值
                     * 
                     */
                    bool COSSourceHasBeenSet() const;

                    /**
                     * 获取Data from CFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CFSSource Data from CFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CFSConfig GetCFSSource() const;

                    /**
                     * 设置Data from CFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cFSSource Data from CFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCFSSource(const CFSConfig& _cFSSource);

                    /**
                     * 判断参数 CFSSource 是否已赋值
                     * @return CFSSource 是否已赋值
                     * 
                     */
                    bool CFSSourceHasBeenSet() const;

                    /**
                     * 获取Data from HDFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HDFSSource Data from HDFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HDFSConfig GetHDFSSource() const;

                    /**
                     * 设置Data from HDFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hDFSSource Data from HDFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHDFSSource(const HDFSConfig& _hDFSSource);

                    /**
                     * 判断参数 HDFSSource 是否已赋值
                     * @return HDFSSource 是否已赋值
                     * 
                     */
                    bool HDFSSourceHasBeenSet() const;

                    /**
                     * 获取GooseFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GooseFSSource GooseFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    GooseFS GetGooseFSSource() const;

                    /**
                     * 设置GooseFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gooseFSSource GooseFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGooseFSSource(const GooseFS& _gooseFSSource);

                    /**
                     * 判断参数 GooseFSSource 是否已赋值
                     * @return GooseFSSource 是否已赋值
                     * 
                     */
                    bool GooseFSSourceHasBeenSet() const;

                    /**
                     * 获取TurboFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CFSTurboSource TurboFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CFSTurbo GetCFSTurboSource() const;

                    /**
                     * 设置TurboFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cFSTurboSource TurboFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCFSTurboSource(const CFSTurbo& _cFSTurboSource);

                    /**
                     * 判断参数 CFSTurboSource 是否已赋值
                     * @return CFSTurboSource 是否已赋值
                     * 
                     */
                    bool CFSTurboSourceHasBeenSet() const;

                    /**
                     * 获取Information from local disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LocalDiskSource Information from local disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LocalDisk GetLocalDiskSource() const;

                    /**
                     * 设置Information from local disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _localDiskSource Information from local disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocalDiskSource(const LocalDisk& _localDiskSource);

                    /**
                     * 判断参数 LocalDiskSource 是否已赋值
                     * @return LocalDiskSource 是否已赋值
                     * 
                     */
                    bool LocalDiskSourceHasBeenSet() const;

                    /**
                     * 获取CBS configuration information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CBSSource CBS configuration information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CBSConfig GetCBSSource() const;

                    /**
                     * 设置CBS configuration information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cBSSource CBS configuration information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCBSSource(const CBSConfig& _cBSSource);

                    /**
                     * 判断参数 CBSSource 是否已赋值
                     * @return CBSSource 是否已赋值
                     * 
                     */
                    bool CBSSourceHasBeenSet() const;

                    /**
                     * 获取Host path information.
                     * @return HostPathSource Host path information.
                     * 
                     */
                    HostPath GetHostPathSource() const;

                    /**
                     * 设置Host path information.
                     * @param _hostPathSource Host path information.
                     * 
                     */
                    void SetHostPathSource(const HostPath& _hostPathSource);

                    /**
                     * 判断参数 HostPathSource 是否已赋值
                     * @return HostPathSource 是否已赋值
                     * 
                     */
                    bool HostPathSourceHasBeenSet() const;

                    /**
                     * 获取
                     * @return PublicDataSource 
                     * 
                     */
                    PublicDataSourceFS GetPublicDataSource() const;

                    /**
                     * 设置
                     * @param _publicDataSource 
                     * 
                     */
                    void SetPublicDataSource(const PublicDataSourceFS& _publicDataSource);

                    /**
                     * 判断参数 PublicDataSource 是否已赋值
                     * @return PublicDataSource 是否已赋值
                     * 
                     */
                    bool PublicDataSourceHasBeenSet() const;

                private:

                    /**
                     * Mapping path.
                     */
                    std::string m_mappingPath;
                    bool m_mappingPathHasBeenSet;

                    /**
                     * Storage purpose.
Valid values: BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, and OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataSourceUsage;
                    bool m_dataSourceUsageHasBeenSet;

                    /**
                     * DATASET, COS, CFS, CFSTurbo, GooseFSx, HDFS, and WEDATA_HDFS
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * Data from the data set.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DataSetConfig m_dataSetSource;
                    bool m_dataSetSourceHasBeenSet;

                    /**
                     * Data from COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CosPathInfo m_cOSSource;
                    bool m_cOSSourceHasBeenSet;

                    /**
                     * Data from CFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CFSConfig m_cFSSource;
                    bool m_cFSSourceHasBeenSet;

                    /**
                     * Data from HDFS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HDFSConfig m_hDFSSource;
                    bool m_hDFSSourceHasBeenSet;

                    /**
                     * GooseFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    GooseFS m_gooseFSSource;
                    bool m_gooseFSSourceHasBeenSet;

                    /**
                     * TurboFS data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CFSTurbo m_cFSTurboSource;
                    bool m_cFSTurboSourceHasBeenSet;

                    /**
                     * Information from local disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LocalDisk m_localDiskSource;
                    bool m_localDiskSourceHasBeenSet;

                    /**
                     * CBS configuration information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CBSConfig m_cBSSource;
                    bool m_cBSSourceHasBeenSet;

                    /**
                     * Host path information.
                     */
                    HostPath m_hostPathSource;
                    bool m_hostPathSourceHasBeenSet;

                    /**
                     * 
                     */
                    PublicDataSourceFS m_publicDataSource;
                    bool m_publicDataSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DATACONFIG_H_
